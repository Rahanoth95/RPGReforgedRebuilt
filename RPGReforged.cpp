#include <iostream>
#include <memory>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Character.h"
#include "Warrior.h"
#include "Mage.h"
#include "Rogue.h"
#include "Paladin.h"
#include "Archer.h"
#include "Berserker.h"
#include "Summoner.h"
#include "Slime.h" // Sample enemy class
#include "Player.h"

std::shared_ptr<Player> createPlayer(const std::string& name, const std::string& classChoice) {
    if (classChoice == "Warrior") return std::make_shared<Warrior>(name);
    if (classChoice == "Mage") return std::make_shared<Mage>(name);
    if (classChoice == "Rogue") return std::make_shared<Rogue>(name);
    if (classChoice == "Paladin") return std::make_shared<Paladin>(name);
    if (classChoice == "Archer") return std::make_shared<Archer>(name);
    if (classChoice == "Berserker") return std::make_shared<Berserker>(name);
    if (classChoice == "Summoner") return std::make_shared<Summoner>(name);
    return nullptr;
}

std::string getRandomName() {
    static std::vector<std::string> names = { "Zane", "Luna", "Thorn", "Kira", "Drake", "Ayla", "Finn" };
    return names[rand() % names.size()];
}

std::string getRandomClass() {
    static std::vector<std::string> classes = { "Warrior", "Mage", "Rogue", "Paladin", "Archer", "Berserker", "Summoner" };
    return classes[rand() % classes.size()];
}

void displayParty(const std::vector<std::shared_ptr<Character>>& party) {
    for (const auto& member : party) {
        member->showStats();
    }
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    std::string playerName, playerClass;
    std::cout << "Enter your character's name: ";
    std::getline(std::cin, playerName);

    std::cout << "Choose your class (Warrior, Mage, Rogue, Paladin, Archer, Berserker, Summoner): ";
    std::getline(std::cin, playerClass);

    auto player = createPlayer(playerName, playerClass);
    if (!player) {
        std::cerr << "Invalid class selected.\n";
        return 1;
    }

    std::vector<std::shared_ptr<Character>> party;
    party.push_back(player);

    std::cout << "Do you want to create a party? (y/n): ";
    std::string choice;
    std::getline(std::cin, choice);
    if (choice == "y" || choice == "Y") {
        int num;
        std::cout << "How many members to add to your party? (1-3): ";
        std::cin >> num;
        std::cin.ignore();
        for (int i = 0; i < num; ++i) {
            std::string randName = getRandomName();
            std::string randClass = getRandomClass();
            auto member = createPlayer(randName, randClass);
            if (member) {
                party.push_back(member);
                std::cout << "Added " << randName << " the " << randClass << " to your party.\n";
            }
        }
    }

    auto enemy = std::make_shared<Slime>("Slime");

    std::cout << "\nBattle begins!\n";
    while (enemy->getStats().health > 0 && player->getStats().health > 0) {
        for (auto& member : party) {
            if (member->getStats().health <= 0) continue;

            std::cout << "\nIt's " << member->getName() << "'s turn.\n";
            std::cout << "1. Attack\n2. Use Ability\n3. Defend\nChoose: ";
            int action;
            std::cin >> action;

            switch (action) {
            case 1:
                enemy->takeDamage(member->getStats().attack);
                break;
            case 2:
                member->useAbility(*enemy);
                break;
            case 3:
                std::cout << member->getName() << " defends this turn.\n";
                member->modifyStats(1.0f, 1.5f); // temporary defense boost
                break;
            default:
                std::cout << "Invalid choice. Skipping turn.\n";
            }

            if (enemy->getStats().health <= 0) {
                std::cout << "Enemy defeated!\n";
                break;
            }
        }

        if (enemy->getStats().health > 0) {
            std::cout << "\nEnemy attacks!\n";
            auto& target = party[rand() % party.size()];
            if (target->getStats().health > 0)
                target->takeDamage(enemy->getStats().attack);
        }
    }

    std::cout << "\nBattle is over.\n";
    displayParty(party);
    enemy->showStats();

    return 0;
}
