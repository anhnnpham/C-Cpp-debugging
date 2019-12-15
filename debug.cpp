
int main()
    int array[size] = {33,66,99};
    //We are passing a pointer or reference to the array
    //so we will not know the size of the array
    //We have to pass the size to the function as well
    arrayAsPointer(array, size);
    arraySized(array, size);
    arrayUnSized(array, size);
//Pass the array as a pointer
void arrayAsPointer(int *array, int size)
    for(int i=0; i<size; i++)
        std::cout<<array[i]<<" ";
//Pass the array as a sized array
void arraySized(int array[3], int size);
//Pass the array as an unsized array
void arrayUnSized(int array[], int size);
