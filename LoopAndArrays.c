#include <stdio.h>

int main(){

	int quantAluno = 0;
	int x, y = 0;
	int contAluno = 1;
	int contAluno2 = 1;

	printf("Quantos alunos tem?: ");
	scanf("%d", &quantAluno);

	float notaAlunos[quantAluno];

	for (x = 0; x < quantAluno; x++){
		printf("Digite a nota do aluno %d \n", contAluno);
		scanf("%f", &notaAlunos[x]);
		contAluno++;
	}
	for (y = 0; y < quantAluno; y++){
		printf("Aluno %d tem a nota %2.f \n", contAluno2, notaAlunos[y]);
		contAluno2++;
	}

	return 0;
}