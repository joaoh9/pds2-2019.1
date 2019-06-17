#ifndef TASK_H
#define TASK_H

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

//ATENCAO: ISSO EH UMA SUGESTAO.

struct Task {
    int id;
    int arrival;
    int duration;
    int remainTime;
    int end;
    bool inQueue;

    Task(int, int, int);
};

struct TaskScheduler {
    int quantum;
    int totalTasks;

    std::list<Task*> schedulerQueue;
    std::list<Task*> tasksWaiting;

    TaskScheduler(int, std::vector<Task*>);

    void checkIncomingTasks(int);
    void RoundRobin();
    void displayResult(std::vector<Task*>);
};

#endif
