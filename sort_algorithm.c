void insert_sort(int *arr, int n) {
	int j, p, tmp;
	for (p = 1; p < n; p++) {
		tmp = arr[p];
		for (j = p; j > 0 && arr[j-1] > tmp; j--)
			arr[j] = arr[j-1];
		arr[j] = tmp;
 	}
}