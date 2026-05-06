#pragma once

#include <string>

class Task {
public:
    virtual ~Task() = default;

    // Executes the task computation
    virtual void execute() = 0;

    // Human-readable task name
    virtual std::string getName() const = 0;
};
