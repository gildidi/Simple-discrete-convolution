typedef struct vector {
	double* vec;
	int size;
}vector;


vector* conv(vector* a, vector* b) {
	vector* result = (vector*)malloc(sizeof(vector));
	result->size = (*a).size + (*b).size - 1;
	result->vec = (double*)calloc(result->size, sizeof(double));
	for (int i = 0; i < result->size; i++)
	{
		int i1 = i;
		int tmp = 0;
		for (int j = 0; j < (*b).size; j++)
		{
			if (i1 >= 0 && i1 < (*a).size)
				tmp = tmp + (*a).vec[i1] * (*b).vec[j];
			i1 = i1 - 1;
			result->vec[i] = tmp;
		}
	}
	return result;
}