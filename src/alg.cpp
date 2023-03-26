// Copyright 2021 NNTU-CS
int help(int *arr, int start, int end, int value, int quantity){
  while (end>=start){
    int midle=(end-start)/2;
    if (arr[midle]==value){
      quantity++;
      help(arr, start, midle-1, value, quantity);
      help(arr, midle+1, end, value, quantity);
    }
    if (arr[midle]>value){
      help(arr, start, midle-1, value, quantity);
    }
    if (arr[midle]<value){
      help(arr, midle+1, end, value, quantity);
    }
  } 
  return quantity;
}
int cbinsearch(int *arr, int size, int value) {
  int quantity=0;
  quantity=help(arr, 0, size, value, quantity);
  if (quantity>0)
    return quantity;
  else
    return 0; // если ничего не найдено
}
