#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

#define CAIXAS 5
#define NOMES 7

int decisao, x;
int Resposta;

void menu(){
	printf("========TÍTULO DO JOGO========\n");
	
	printf("-----1: Perguntas e Respostas!\n");
	printf("-----2: Cobra na Caixa!\n");
	printf("-----3: Gousmas War!\n");
	printf("-----4: Sair! \n");
	scanf("%i", &decisao);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
    menu();
	
	while (decisao != 4){
		
		if (decisao == 1){
			printf("Entrando no jogo de perguntas e respostas! . . .\n");
			
			// a variavel resposta q tava aqui eu mudei pra cima, tava dando um erro
			//pergunta 1
			
			printf("Com seus conhecimentos . . . Responda: quantos ossos tem um corpo humano adulto?\n");
			printf("1: 302 ossos\n");
			printf("2: 176 ossos\n");
			printf("3: 189 ossos\n");
			printf("4: 206 ossos\n");
		
			scanf("%i", &Resposta);
			
			if(Resposta == 4){
				printf("Resposta correta! Sua sabedoria é invejável, jogador.\n");
			}else{
				printf("Resposta errada! Esperava mais de você, jogador . . . A alternativa a correta era a número 4. \n");
			}
		
		// pergunta 2
		
			printf("Próxima pergunta! Quantas teclas tem um piano padrão moderno?\n");
			printf("1: 76 teclas\n");
			printf("2: 88 teclas\n");
			printf("3: 76 teclas\n");
			printf("4: 98 teclas\n");
			
			scanf("%i", &Resposta);
			
			if(Resposta == 2){
				printf("Resposta correta! Continue assim.\n");
			}else{
				printf("Resposta errada! Há de melhorar, jogador . . . A alternativa correta era a número 2.\n");
			}
		
		
		//pergunta 3
			  		printf("Agora essa: Quantos elementos tem na tabela periódica?\n");
			printf("1: 118 elementos\n");
			printf("2: 129 elementos\n");
			printf("3: 201 elementos\n");
			printf("4: 132 elementos\n");
			
			scanf("%i", &Resposta); 
			
			if(Resposta == 1){
				printf("Resposta correta! Você está sempre melhorando.\n");
			}else{
				printf("Resposta errada! Vai se sair melhor na próxima. A alternativa a correta era a número 1. \n");
			}
		
		// pergunta 4
			printf("Próxima! Quem é considerado o pai da Ciência da Computação moderna?\n");
			printf("1: Charles Babbage\n");
			printf("2: Alan Turing\n");
		   	printf("3: Nikola Tesla\n");
		   	printf("4: Herman Hollerith\n");
		   	
		   	scanf("%i", &Resposta); 
		   	
			if(Resposta == 2){
				printf("Resposta correta! Essa foi fácil, mesmo.\n");
			}else{
				printf("Resposta errada! Minha avó fez essa pensando que era bingo e acertou. A alternativa a correta era a número 2. \n");
			}
		
		// pergunta 5 (e ultima gracas a deus)
			printf("Por fim. . . Qual foi o primeiro país a mandar uma pessoa ao espaço, qual o nome do astronauta e o que ele disse quando viu a terra?\n");
			printf("1: União Soviética, Valentina Tereshkova, 'Sou eu, Gaivota! Tudo está bem'\n");
			printf("2: Estados Unidos, Timbaland, 'I´m a real producer and you just the piano man'\n");
		   	printf("3: União soviética, Yuri Gagarin, 'A Terra é azul'\n");
		   	printf("4: China, Xi Jingping, 'A Terra é plana'\n");
		   	
		   	scanf("%i", &Resposta); 
		   	
			if(Resposta == 3){
				printf("Resposta correta! Que bom que acertou.\n");
			}else{
				printf("Resposta errada! A alternativa correta era a número 3. Tente jogar novamente.\n");
			}
		
		printf("Jogar novamente?\n");
		printf("1: Sim!\n");
		printf("2: Não!\n");
		
		scanf("%i", &Resposta); 
		   	
			if(Resposta == 1){
				printf("Recomeçando . . .\n");
			}else{
				printf("Fechando jogo . . . \n");
				decisao = 5;
			
			}
		
		}
	
		else if (decisao == 2){
			printf("Entrando no jogo cobra na caixa! . . .\n");
			char nomes[NOMES][20] = {
    "Isis", "Merit", "Anúbis", "Bastet", "Osíris", "Nefertiti", "Ramsés"
};

		void limparBuffer() {
    	int c;
    		while ((c = getchar()) != '\n' && c != EOF);
}
		int lerInteiro() {
    	int valor;
    	while (scanf("%d", &valor) != 1)
		 if(valor == 0){
        printf("MAU USUÁRIO! Digite um numero de 1 a 7:\n");
    }if(valor > 7){
		printf("MAU USUÁRIO! Digite um numero de 1 a 7:\n");
	}
   	    return valor;
}

		void jogar() {
   	    int escolha1, escolha2;
    	char jogador1[20], jogador2[20];

    	int botao, cobra;
    	int abertas[CAIXAS];

    	int jogadorAtual;
    	int escolha;
    	int i;

    	for (i = 0; i < CAIXAS; i++) {
        abertas[i] = 0;
    }

    	printf("\nEscolha o nome do Jogador 1:\n");
   		 for (i = 0; i < NOMES; i++) {
        printf("%d - %s\n", i + 1, nomes[i]);
    }

    	escolha1 = lerInteiro();

    	printf("\nEscolha o nome do Jogador 2:\n");
    	for (i = 0; i < NOMES; i++) {
    		    if (i != escolha1 - 1) {
            printf("%d - %s\n", i + 1, nomes[i]);
        }
    }
    escolha2 = lerInteiro();
    strcpy(jogador1, nomes[escolha1 - 1]);
	strcpy(jogador2, nomes[escolha2 - 1]);
    while (strcmp(jogador1, jogador2)==0){ //comparar char
		printf("\nEscolha o nome válido do Jogador 2:\n");
		for (i = 0; i < NOMES; i++) {
			if (i != escolha1 - 1) {
				printf("%d - %s\n", i + 1, nomes[i]);
			}
			
		}
		escolha2 = lerInteiro();//ler
		strcpy(jogador2, nomes[escolha2 - 1]);//armazena
		
	}
	

    		

    	botao = rand() % CAIXAS;

    	do {
        cobra = rand() % CAIXAS;
    	} while (cobra == botao);

    	jogadorAtual = rand() % 2;

    	printf("\n%s vs %s\n", jogador1, jogador2);

    	if (jogadorAtual == 0){
        printf("Jogador inicial: %s\n", jogador1);
		}else{
        printf("Jogador inicial: %s\n", jogador2);
		}
  			while (1) {

        		if (jogadorAtual == 0)
            printf("\nTurno de %s\n", jogador1);
        		else
            printf("\nTurno de %s\n", jogador2);

        	printf("Escolha uma caixa (1 a 5): ");

        		escolha = lerInteiro();
        		escolha = escolha - 1;

        		if (escolha < 0 || escolha >= CAIXAS) {
            printf("Opcao invalida!\n");
            continue;
        }

        		if (abertas[escolha] == 1) {
            printf("Caixa ja aberta!\n");
            continue;
        }

        abertas[escolha] = 1;

        		if (escolha == botao) {
	 	 	    if (jogadorAtual == 0)
                printf("\n>>> VOCÊ ACHOU O BOTÃO! %s venceu!\n", jogador1);
            	else
                printf("\n>>> VOCÊ ACHOU O BOTÃO! %s venceu!\n", jogador2);
            break;
        }

        		if (escolha == cobra) {
            	if (jogadorAtual == 0)
                printf("\n>>> COBRA! %s perdeu!\n", jogador1);
            	else
                printf("\n>>> COBRA! %s perdeu!\n", jogador2);
        }

        printf("Caixa vazia . . .\n");
        

        if (jogadorAtual == 0)
            jogadorAtual = 1;
        else
            jogadorAtual = 0;
    }
}

    srand(time(NULL));
    jogar();

		}
		else if (decisao == 3){
			
			
			//funções:
			int furia1 = 1, furia2 = 1, furia3 = 1, furia4 = 1;
			void placar (int furia1, int furia3, int furia2, int furia4){
				printf("  PLACAR\n");
				printf("%i\t%i\n%i\t%i\n", furia1, furia3, furia2, furia4);
			}
			// só pra mostrar placar
			void atacar(int *alvo, int ataque){
				*alvo=*alvo+ataque;
			}
			// ataque
			void dividir(int *gousmas1, int *gousmas2){
				int calculo;
				if (*gousmas1>=6 && *gousmas2<6){
					*gousmas1=0;
				}
				else if (*gousmas2>=6 && *gousmas1<6){
					*gousmas2=0;
				}
				calculo = *gousmas1+*gousmas2;
				calculo= calculo%2;
				if (calculo!=0){
					calculo = (*gousmas1+*gousmas2)-1;
					calculo=(calculo/2);
					*gousmas1=calculo+1;
				}
				else{
					calculo = (*gousmas1+*gousmas2);
					calculo=(calculo/2);
					*gousmas1=calculo;
				}
				*gousmas2=calculo;
				
			}
			//divisão das gousmas
			void turno(int jogador){
				printf("Jogador %i\n", jogador);
				printf("6 ou mais, gousma morta\n");
				printf("1: Atacar gousma de cima\n");
				printf("2: Atacar gousma de baixo\n");
				printf("3: Desistir\n");
				printf("4: Dividir\n");
				scanf("%i", &decisao);
				placar(furia1, furia3, furia2, furia4);
				
			}
			
			printf("Entrando no jogo gousmas war! . . .\n");
			printf("Como funciona:\nCada jogador possui 2 criaturas, as gousmas, cada uma no nivel 1 de fúria\n");
			printf("Cada ataque, a criatura transmite uma fúria para a outra, até morrer (quando alcançar nível 5). ");
			printf("O jogador tem a opção de dividir fúria com a outra própria gousma. ");
			printf("O primeiro a passar do nivel 5 nas duas gousmas, perde\n\n");
			// apenas falando sobre o jogo
			while ((furia1 < 6 || furia2 < 6) && (furia3 < 6 || furia4 < 6)){ 
				//pra definir o fim da partida
				/*
				player1/player2
				  1       3
				  2       4*/
				turno(1);//JOGADOR1
				
				if (decisao==1 && furia3<6){
					printf("usar gousmas de cima(1), com %i de furia, ou gousmas de baixo(2), com %i de furia?", furia1, furia2);
					scanf("%i", &decisao);
						if (decisao==1 && furia1<6){
							atacar(&furia3, furia1);
							placar(furia1, furia3, furia2, furia4);
						}
						else if (decisao==2 && furia1<6){
							atacar(&furia3, furia2);
							placar(furia1, furia3, furia2, furia4);
						}
						else{
							printf("tente de novo");
							scanf("%i", &decisao);
						}
						//ação de atacar, podendo escolher qual das duas gousmas ataca
				}
				else if (decisao==2 && furia4<6){
					printf("usar gousmas de cima(1), com %i de furia, ou gousmas de baixo(2), com %i de furia?", furia1, furia2);
					scanf("%i", &decisao);
						if (decisao==1 && furia1<6){
							atacar(&furia4, furia1);
							placar(furia1, furia3, furia2, furia4);
						}
						else if (decisao==2 && furia1<6){
							atacar(&furia4, furia2);
							placar(furia1, furia3, furia2, furia4);
						}
						else{
							printf("tente de novo");
							scanf("%i", &decisao);
						}
						//ação de atacar, podendo escolher qual das duas gousmas ataca
				}
				else if (decisao==3){
					furia1=6;
					furia2=6;
					printf("JOGADOR2-> VENCEDOR");
					//DESISTÊNCIA
					break;
				}
				else if (decisao==4 && (furia1<6 || furia2<6)){
					dividir(&furia1, &furia2);
					placar(furia1, furia3, furia2, furia4);
				}
				else{
					printf("tente de novo");
					scanf("%i", &decisao);
				}
				turno(2);//JOGADOR 2
				if (decisao==1 && furia1<6){
					printf("usar gousmas de cima(1), com %i de furia, ou gousmas de baixo(2), com %i de furia?", furia3, furia4);
					scanf("%i", &decisao);
						if (decisao==1 && furia3<6){
							atacar(&furia1, furia3);
							placar(furia1, furia3, furia2, furia4);
						}
						else if (decisao==2 && furia3<6){
							atacar(&furia1, furia4);
							placar(furia1, furia3, furia2, furia4);
						}
						else{
							printf("tente de novo");
							scanf("%i", &decisao);
						}
						//ação de atacar, podendo escolher qual das duas gousmas ataca
				}
				else if (decisao==2 && furia2<6){
					printf("usar gousmas de cima(1), com %i de furia, ou gousmas de baixo(2), com %i de furia?", furia3, furia4);
					scanf("%i", &decisao);
						if (decisao==1 && furia3<6){
							atacar(&furia2, furia3);
							placar(furia1, furia3, furia2, furia4);
						}
						else if (decisao==2 && furia1<6){
							atacar(&furia2, furia4);
							placar(furia1, furia3, furia2, furia4);
						}
						else{
							printf("tente de novo");
							scanf("%i", &decisao);
						}
						//ação de atacar, podendo escolher qual das duas gousmas ataca
				}
				else if (decisao==3){
					furia3=6;
					furia4=6;
					printf("JOGADOR2-> VENCEDOR");
					//DESISTÊNCIA
					break;
				}
				else if (decisao==4 && (furia3<6 || furia4<6)){
					dividir(&furia3, &furia4);
					placar(furia1, furia3, furia2, furia4);
				}
				else{
					printf("tente de novo");
					scanf("%i", &decisao);
				}
			}
			
		printf("\nDeseja jogar novamente? Digite 3\n");
		printf("Voltar ao menu? Digite 5\n\n");
		scanf("%i", &decisao);
			
		}
		else if (decisao == 4){
			printf("Saindo do programa . . .");
			x = 4;
			break;
		}
		else if (decisao == 5){
			printf("TÍTULO DO JOGO\n");
	
			printf("1: Pergunta e Resposta \n");
			printf("2: Cobra na Caixa! \n");
			printf("3: Gousmas War \n");
			printf("4:Sair \n");
			scanf("%i", &decisao);
		}
		else{
			printf("MAU USUÁRIO!\nESCREVA CERTO . . . \n");
			scanf("%i", &decisao);
		}
	}
	
	
    return 0;
}
