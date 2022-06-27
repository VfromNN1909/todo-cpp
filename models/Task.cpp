//
// Created by VfromNN on 26.06.22.
//

#include "Task.h"

const std::string &Task::getTitle() const {
    return title;
}

void Task::setTitle(const std::string &title) {
    Task::title = title;
}

const std::string &Task::getDescription() const {
    return description;
}

void Task::setDescription(const std::string &description) {
    Task::description = description;
}

int Task::getPriority() const {
    return priority;
}

void Task::setPriority(int priority) {
    Task::priority = priority;
}

long long int Task::getCreatedAt() const {
    return created_at;
}

void Task::setCreatedAt(long long int createdAt) {
    Task::created_at = createdAt;
}

Task::Task(const std::string &title, const std::string &description, int priority, long long int createdAt) : title(
        title), description(description), priority(priority), created_at(createdAt) {
}

std::ostream &operator<<(std::ostream &Str, Task const &v) {
    Str << "{ Task(title = '" + v.getTitle() + "', description = '" + v.getDescription() + "', priority = '" +
           std::to_string(v.getPriority()) + "', created_at = '" + std::to_string(v.getCreatedAt()) + "' }";
}
