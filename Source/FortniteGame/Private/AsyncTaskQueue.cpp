#include "AsyncTaskQueue.h"

void UAsyncTaskQueue::OnAsyncTaskFinished(const FAsyncTaskResult& Result) {
}

UAsyncTaskQueue::UAsyncTaskQueue() {
    this->CurrentTask = NULL;
}

