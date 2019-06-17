#include "Task.cpp"

Task::Task(int _id, int _arrival, int _duration) {
    this->id = _id;
    this->arrival = _arrival;
    this->duration = _duration;
    this->remainTime = _duration;
    this->end = -1;
    this->inQueue = false;
};

TaskScheduler::TaskScheduler(int _quantum, int _totalTasks) {
    this->quantum = _quantum;
    this->totalTasks = _totalTasks;
    this->schedulerQueue = NULL;
    this->tasksWaiting = NULL;
}

/*
 for (ptr = ar.begin(); ptr < ar.end(); ptr++) 
        cout << *ptr << " "; 
*/
