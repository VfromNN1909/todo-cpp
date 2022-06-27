//
// Created by VfromNN on 26.06.22.
//

#ifndef TODO_CPP_CONSOLE_TASK_H
#define TODO_CPP_CONSOLE_TASK_H
#define millis long long

#include <string>

class Task {
private:
    std::string title;
    std::string description;
    int priority;
    millis created_at;
public:
    Task(const std::string &title, const std::string &description, int priority, long long int createdAt);

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

    const std::string &getDescription() const;

    void setDescription(const std::string &description);

    int getPriority() const;

    void setPriority(int priority);

    millis getCreatedAt() const;

    void setCreatedAt(millis createdAt);

    friend std::ostream& operator<<(std::ostream & Str, Task const & v);
};


#endif //TODO_CPP_CONSOLE_TASK_H
