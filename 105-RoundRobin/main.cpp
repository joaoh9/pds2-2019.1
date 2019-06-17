#include <iostream>
#include <stdlib>
#include "Task.hpp"

int main() {
    int quantum, quantidade;

    std::cin << quantum << quantidade;

    int id, arrival, duration;

    std::vector<Task> TaskList;
    std::vector<int> listed;

    for (int i = 0; i < quantidade; i++) {
        std::cin << id << arrival << duration;
        TaskList.push_back(new Task(id, arrival, duration));
        listed.push_back(id);
    }

    std::vector<Task> TaskQueue;

    // 1 - pegar task com menor arrival time
    // 2 - mudar de task em um dos 3 casos a seguir:
    // 2.1 - remainTime da task for 0
    // 2.1.1 - retirar essa task do vetor de listed
    // 2.2 - quantum atingir o limite
    // 3 - verificar se nenhuma task chegou durante o utlimo burst de tempo
    // 3.1 - se sim, adicionar essa task ao stack de tasks em queue
    // 4 - pegar a proxima task do queue -> 1

    int time = 0;
    int previousTime = 0;

    // 2 6
    // 2 1 5        Tast 1, Duration: [0, 8]
    // 4 3 1        Task 2, Duration: [1, 18]
    // 3 2 2        Task 3, Duration: [2, 6]
    // 6 6 3        Task 4, Duration: [3, 9]
    // 5 4 6        Tast 5, Duration: [4, 21]
    // 1 0 4        Task 6, Duration: [6, 19]

    // Time     Stack               Finished    Left
    // 0        P1
    // 1        P1, P2
    // 2        P2, P3, P1                      {P1: 2}
    // 3        P2, P3, P1, P4                  {P1: 2}
    // 4        P3, P1, P4, P2                  {P1: 2, P2: 3}
    // 6        P1, P4, P2, P5      P3          {P1: 2, P2: 3}
    // 8        P4, P2, P5          P1          {P2: 3}
    // 9        P2, P5              P4          {P2: 3}
    // 11       P5, P2                          {P2: 1}
    // 13       P2, P5                          {P2: 1, P5: 4}
    // 14       P5                  P2          {P5: 4}
    // 18                           P5
    std::vector<Task *> TaskQueue;
    TaskQueue.push_back(getFirstArrival(TaskList));

    while (remain.size() != 0) {
        if (T->remainTime <= quantum && T->remainTime > 0) {
            time += T->remainTime;
            T->end = time;

            checkforNewArrivals = true;
        }

        else if (T->remainTime > quantum) {
            T->remainTime -= quantum;
            time += quantum;
            checkforNewArrivals = true;
        }
    };

    return 0;
}

Task *getEarliestTask(std::vector<Task *> TaskList, std::vector<int> listed) {
    int earliest = 0xFFFFF;
    Task *earliestTask = NULL;

    std::vector<int>::iterator ptr;
    for (ptr = TaskList.begin(); ptr < TaskList.end(); ptr++) {
        if (ptr->arrival < earliest && !(std::find(listed.begin(), listed.end(), ptr->arrival))) {
            earliestTask = ptr;
        }
    }

    return earliestTask;
}

std::vector<Task *> lookForNewArrivals(std::vector<Task> TaskList, std::vector<int> listed, initTime, maxTime) {
    std::vector<Task *> NewArrivals;

    std::vector<int>::iterator ptr;

    for (ptr = TaskList.begin(); ptr < TaskList.end(); ptr++) {
        if (ptr->arrival >= timeStart && ptr->arrival <= maxTime) {
            NewArrivals.push_back(ptr);
        }
    }

    if (newArrivals.size() > 1) {
        return ordenateSameTimeArrivals(NewArrivals);
    }

    return NewArrivals;
}

std::vector<Task *> ordenateSameTimeArrivals(std::vector<Task *> TaskList) {
    std::vector<int>::iterator ptr;

    for (ptr = TaskList.begin(); ptr < TaskList.end(); ptr++) {
        if (ptr->arrival >= timeStart && ptr->arrival <= maxTime) {
            NewArrivals.push_back(ptr);
        }
    }
}
