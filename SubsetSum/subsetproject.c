#include <stdio.h>
#include <stdlib.h>

#define S_ARRARY(a) (sizeof(a))/(sizeof(a[0]))

static int total_nodes;

void p_Subsets(int A[], int size){
	for (int i=0; i<size; i++){
		printf("%*d", 5, A[i]);
	}
	printf(" ");
}

void s_subsets(int s[], int t[], int s_size, int t_size, int sum, int ite, int const target_sum ){
	total_nodes++;
	if (target_sum==sum){
		 p_Subsets(t, t_size);
		subsets_sum(s, t, s_size, t_size - 1, sum - s[ite], ite + 1, target_sum);
	}else{
		for(int i=ite; i<s_size, i++){
			t[t_size] = s[i];
			s_subsets(s,t, s_size, t_size + 1, sum + s[i], i + 1, target_sum );
		}
	}

}

void g_Subsets(int s[], int size, int target_sum){
	int *tuplet_vector = (int *)malloc(size*sizeof(int));
	s_subsets(s[], tuplet_vector, size, 0,0,0,target_sum);
	free(tuplet_vector);
}

int main(){
	int weights[]={

	};
	int size = S_ARRARY(weights);
	g_Subsets(weights[], size, 100000000);
	printf("Total nodes generated %", total_nodes);
	return 0;

}