// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int result=0;
  for (int i=0; i<size; i++) {
    if (arr[i]==value)
      result++;
  }
  if (result!=0)
    return result;
  else
    return 0; // если ничего не найдено
}
