#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string name;
    std::string assignee;
    std::string status;
};

class TaskManager {
public:
    void addTask(const std::string& name, const std::string& assignee);
    void updateTaskStatus(int index, const std::string& status);
    void displayTasks() const;

private:
    std::vector<Task> tasks;
};

#endif // TASKMANAGER_H
