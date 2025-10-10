int partition (int l, int h) {
  int pivot = a[h];
    int i = l - 1;
    for (int j = l; j < h; j++) {
      if (a[j] < pivot) {
          i++;
          swap(a[i], a[j]);
      }
    }
    swap(a[i + 1], a[h]);
    return i + 1;
}