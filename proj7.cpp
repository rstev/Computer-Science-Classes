void merge(int outputArray[], int firstArray[], int sizeFirst, int secondArray[], int sizeSecond){
    int p = 0;
    int p1 = 0; 
    int p2 = 0;
    while(p1 < sizeFirst && p2 < sizeSecond){
        if(first[p1] < second[p2])
            outputArray[p++] = firstArray[p1++];
        else 
            outputArray[p++] = secondArray[p2++];
    }

    while(p1 < sizeFirst) outputArray[p++] = firstArray[p1++];
    while(p2 < sizeSecond) outputArray[p++] = secondArray[p2++];
}

void mergeSort(int numbers[], int size){
    if(size == 1) return;
    int mid = size/2;
    int firstPartSize = mid;
    int secondPartSize = size - mid;

    int firstArray[firstPartSize];
    int secondArray[secondPartSize];

    for(int i = 0 ; i < size ;i++){
        if(i < mid)
            firstArray[i] = numbers[i];
        else 
            secondArray[i - mid] = numbers[i];
    }

    sort(firstArray, firstPartSize);
    sort(secondArray, secondPartSize);
    merge(numbers, first, firstPartSize, second, secondPartSize);
}


void sort(Vector<int> & vec){
	quicksort(vec, 0, vec.size()-1);
}
void quicksort(Vector<int> & vec, int start, int finish){
	if (start >= finish) return;
	int boundary = partition(vec, start, finish);
	quicksort(vec, start, boundary - 1);
	quicksort(vec, boundary + 1 finish);
}
int partition(Vector<int> & vec, int start, int finish){
	int pivot = vec[start];
	int lh = start + 1;
	int rh = finish;
	while (true){
		while(lh<rh && vec[rh] >= pivot) rh--;
		while(lh<rh && vec[lh] < pivot) lh++;
		if(lh == rh)break;
		int temp = vec[lh];
		vec[lh] = vec[rh];
		vec[rh] = temp;
	}
	if(vec[lh] >= pivot) return start;
	vec[start] = vec[lh];
	vec[lh] = pivot;
	return lh;
}


		