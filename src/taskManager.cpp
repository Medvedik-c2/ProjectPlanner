#include "TaskManager.h"

void TaskManager::addTask(const std::string& name, const std::string& assignee) {
    Task newTask = {name, assignee, "Pending"};
    tasks.push_back(newTask);
}

void TaskManager::updateTaskStatus(int index, const std::string& status) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].status = status;
    } else {
        std::cout << "Invalid task index!" << std::endl;
    }
}

void TaskManager::displayTasks() const {
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << "Task " << i + 1 << ": " << tasks[i].name
                  << ", Assignee: " << tasks[i].assignee
                  << ", Status: " << tasks[i].status << std::endl;
    }
}
