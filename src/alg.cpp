// Copyright 2021 NNTU-CS

int midle(int *arr, int start, int end, int value){
  int result;
  int mid=(end-start)/2;
  if (arr[mid]>value)
    midle(*arr, mid,end,value);
  if (arr[mid]<value)
    midle(*arr, start,mid,value);
  if (arr[mid]==value){
    result++;
    midle(*arr, start,mid,value);
    midle(*arr, mid,end,value);
  }
  return result;
}
int cbinsearch(int *arr, int size, int value) {
  int result=midle(*arr, 0, size, value);
  
  if (result != 0)
    return result;
  else
    return 0; // если ничего не найдено
}
