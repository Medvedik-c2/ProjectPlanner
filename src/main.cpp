#include <iostream>
#include "TaskManager.h"

int main() {
    TaskManager taskManager;
    int choice;
    std::string taskName, assignee, status;
    
    do {
        std::cout << "1. Add Task\n2. Update Task Status\n3. Display Tasks\n0. Exit\nChoose an option: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter task name: ";
                std::cin.ignore();
                std::getline(std::cin, taskName);
                std::cout << "Enter assignee: ";
                std::getline(std::cin, assignee);
                taskManager.addTask(taskName, assignee);
                break;
            case 2:
                int index;
                std::cout << "Enter task index to update: ";
                std::cin >> index;
                std::cout << "Enter new status: ";
                std::cin.ignore();
                std::getline(std::cin, status);
                taskManager.updateTaskStatus(index - 1, status);
                break;
            case 3:
                taskManager.displayTasks();
                break;
            case 0:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid option!" << std::endl;
        }
    } while (choice != 0);

    return 0;
}
