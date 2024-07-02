#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<conio.c>
struct contatos{
	char nome[35];
	int tel;
	
}agenda[15];
int main (){
int op=0,i=0,x,qc=0,alt,cop2,pt,cr3,at,cop4,encontrar=0,c4=0,encontrar2=0,op2=0;
char pn[100],rn[100],ar[100];

//TELA DE BEM VINDO;

system("color 80");
textbackground(0);
for(int i=2;i<26;i++){
	for(int j=1;j<40;j++){
		gotoxy(j+40,i);
	    printf(" ");
		
	    
	}
}
for(int i=3;i<24;i++){
	for(int j=3;j<=37;j++){
	
		textcolor(15);
		gotoxy(j+40,i);
	    printf("\xDB");
		
	    
	}
}
textbackground(15);
textcolor(0);
gotoxy(55,4);
printf("Bem vindo.");
gotoxy(45,8);
printf("Esse software um e teste de um"); 
gotoxy(45,9);
printf("um aplicativo de agenda de con-"); 
gotoxy(45,10);
printf("tatos feito pelos alunos gabriel");
gotoxy(45,11);
printf("manacas e davi guimaroes");
textcolor(4);
gotoxy(45,13);
printf("Obs: Pressione a tecla do nume-");
gotoxy(45,14);
printf("ro desejado e pressione enter.");
gotoxy(45,15);
printf("tambem pressione 6 para parar");
gotoxy(45,16);
printf("o programa");
gotoxy(45,20);
textcolor(0);
printf("aperte em qualquer esspaco para");
gotoxy(45,21);
printf("Continuar...");
gotoxy(47,23);
textcolor(0);
printf("|||");
gotoxy(60,23);
printf("O");
gotoxy(73,23);
printf("<");
getch();


// Tela de opçoes
do{
system("color 80");
system("cls");
textbackground(0);
for(int i=2;i<26;i++){
	for(int j=1;j<40;j++){
		gotoxy(j+40,i);
	    printf(" ");
		
	    
	}
}
for(int i=3;i<24;i++){
	for(int j=3;j<=37;j++){
	
		textcolor(15);
		gotoxy(j+40,i);
	    printf("\xDB");
	}
}
textbackground(15);textcolor(0);
gotoxy(47,23);
textcolor(0);
printf("|||");
gotoxy(60,23);
printf("O");
gotoxy(73,23);
printf("<");
for(int i=4;i<=6;i++){
	for(int j=50;j<=71;j++){
	gotoxy(j,i);
	textbackground(3);
	printf(" ");
	}
}
textbackground(15);
textcolor(0);
gotoxy(52,5);
printf("1-ADICIONAR CONTATO");
for(int i=8;i<=10;i++){
	for(int j=50;j<=71;j++){
	gotoxy(j,i);
	textbackground(3);
	printf(" ");
	}
}
gotoxy(52,9);
textbackground(15);
printf("2-CONSULTAR CONTATO");
for(int i=12;i<=14;i++){
	for(int j=50;j<=71;j++){
	gotoxy(j,i);
	textbackground(3);
	printf(" ");
	}
}
gotoxy(52,13);
textbackground(15);
printf("3-REMOVER CONTATO  ");
for(int i=16;i<=18;i++){
	for(int j=50;j<=71;j++){
	gotoxy(j,i);
	textbackground(3);
	printf(" ");
	}
}
gotoxy(52,17);
textbackground(15);
printf("4-ALTERAR CONTATO  ");
for(int i=20;i<=22;i++){
	for(int j=50;j<=71;j++){
	gotoxy(j,i);
	textbackground(3);
	printf(" ");
	}
}
gotoxy(52,21);
textbackground(15);
printf("5-LISTAR CONTATO  \n");
gotoxy(51,23);textcolor(3);scanf("%d",&op);textcolor(0);

//CODIGO DAS OPÇOES

switch(op){
	case 1:
			textbackground(0);
			for(int i=2;i<26;i++){
				for(int j=1;j<40;j++){
					gotoxy(j+40,i);
	    			printf(" ");	    
				}
			}
			for(int i=3;i<24;i++){
				for(int j=3;j<=37;j++){
					textcolor(15);
					gotoxy(j+40,i);
	    			printf("\xDB"); 
				}
			}
			textbackground(15);textcolor(0);
			gotoxy(47,23);
			printf("|||");
			gotoxy(60,23);
			printf("O");
			gotoxy(73,23);
			printf("<");
			//PARTE CADASTRO
			textbackground(15);textcolor(0);
			gotoxy(51,4);
			printf("CADASTRAR CONTATO");
			if(qc<100){
				gotoxy(46,8);
				printf("Informe nome:");
				for(i=8;i<22;i++){
					gotoxy(i,63);
					textbackground(0);
					printf("\xDB");
				}
					textbackground(15);
					textcolor(0);
					gotoxy(46,10);
					printf("Informe telefone:");
				for(i=9;i<22;i++){
					gotoxy(i,63);
					textbackground(0);
					printf("\xDB");
				}
					gotoxy(59,8);
					textcolor(4);
					fflush(stdin);
					gets(agenda[qc].nome);
					gotoxy(63,10);
					textcolor(4);
					scanf("%d", &agenda[qc].tel);
					textbackground(15);
					textcolor(0);
					gotoxy(48,15);
					printf("Nome: %s",agenda[qc].nome);
					gotoxy(48,16);
					printf("Telefone: %d",agenda[qc].tel);
					gotoxy(48,17);
					printf("-------------------------");
					gotoxy(48,20);
					printf("CADASTRADO COM SUCESSO...");
					qc++;textbackground(2);
			}else{
				gotoxy(48,10);
				textcolor(4);
				printf("LISTA DE CONTATOS CHEIA!!!");
				textcolor(15);
			}
				getch();
				break;
	case 2:
			textbackground(0);
			for(int i=2;i<26;i++){
				for(int j=1;j<40;j++){
					gotoxy(j+40,i);
	    			printf(" ");	    
				}
			}
			for(int i=3;i<24;i++){
				for(int j=3;j<=37;j++){
					textcolor(15);
					gotoxy(j+40,i);
	    			printf("\xDB"); 
				}
			}
			textbackground(15);textcolor(0);
			gotoxy(47,23);
			textcolor(0);
			printf("|||");
			gotoxy(60,23);
			printf("O");
			gotoxy(73,23);
			printf("<");
			//TELA CONSULTAR
	if(i!=0){
			textbackground(15);textcolor(0);
			gotoxy(52,4);
			printf("CONSULTAR CONTATO");
			gotoxy(45,8);
			printf("por qual forma deseja encontrar"); 
			gotoxy(45,9);
			printf("o contato:");
			gotoxy(45,10);
			printf("1-Nome\t2-Telefone");
			gotoxy(45,11);
			textbackground(0);textcolor(4);
			printf("               ");
			gotoxy(45,11);
			scanf("%d",&cop2);
			textbackground(15);textcolor(0);
			if(cop2 == 1){
				gotoxy(45,13);
				printf("Digite o nome do contato:");
				textbackground(0);textcolor(4);
				gotoxy(45,14);
				printf("                            ");
				gotoxy(45,14);
				fflush(stdin);
				gets(pn);
				for(x=0;x<qc;x++){
					if(strcmp(pn,agenda[x].nome) == 0){
						encontrar = 1;
					}
				}
					if(encontrar == 1){
						for(x=0;x<qc;x++){
							if(strcmp(pn,agenda[x].nome) == 0){
								textbackground(15);textcolor(0);
								gotoxy(45,17);
								printf("Nome: %s", agenda[x].nome);
								gotoxy(45,18);
								printf("Telefone: %d", agenda[x].tel);
								gotoxy(45,19);
								printf("---------------------------");
								gotoxy(45,20);
								printf("Finalizando.....");Sleep(2000);
								break;
							}
						}
					}else{
						textbackground(15);textcolor(4);
						gotoxy(45,17);
						printf("CONTATO INEXISTENTE....");
						textbackground(15);textcolor(0);
						gotoxy(45,20);
						printf("Finalizando.....");Sleep(2000);
						break;
						}
			}else{
					gotoxy(45,13);
					printf("Digite o numero do contato:");
					textbackground(0);textcolor(4);
					gotoxy(45,14);
					printf("                            ");
					gotoxy(45,14);
					scanf("%d",&pt);
					for(x=0;x<qc;x++){
					if(pt == agenda[x].tel){
						encontrar = 1;
					}
				}
					if(encontrar == 1){
						for(x=0;x<qc;x++){
							if(pt == agenda[x].tel){
								textbackground(15);textcolor(0);
								gotoxy(45,17);
								printf("Nome: %s", agenda[x].nome);
								gotoxy(45,18);
								printf("Telefone: %d", agenda[x].tel);
								gotoxy(45,19);
								printf("---------------------------");
								gotoxy(45,20);
								printf("Finalizando.....");Sleep(2000);
								break;
							}
						}
					}else{
						textbackground(15);textcolor(4);
						gotoxy(45,17);
						printf("CONTATO INEXISTENTE....");
						textbackground(15);textcolor(0);
						gotoxy(45,20);
						printf("Finalizando.....");Sleep(2000);
						break;
						}
			}
	}else{
			textbackground(15);textcolor(0);
			gotoxy(52,4);
			printf("CONSULTAR CONTATO");
			gotoxy(45,6);
			textcolor(4);
			printf("NENHUM CONTATO REGISTRADO!!");
			gotoxy(45,7);
			printf("E necesssario registrar ao me-");
			gotoxy(45,8);
			printf("nos um contato para realizar");
			gotoxy(45,9);
			printf("essa funcao");
			gotoxy(45,22);
			textcolor(0);
			printf("ENTER para voltar.....");
			
	}
		getch();
		break;
	case 3:
		textbackground(0);
			for(int i=2;i<26;i++){
				for(int j=1;j<40;j++){
					gotoxy(j+40,i);
	    			printf(" ");	    
				}
			}
			for(int i=3;i<24;i++){
				for(int j=3;j<=37;j++){
					textcolor(15);
					gotoxy(j+40,i);
	    			printf("\xDB"); 
				}
			}
			textbackground(15);textcolor(0);
			gotoxy(52,4);
			printf("EXCLUIR CONTATO");
			textbackground(15);textcolor(0);
			gotoxy(47,23);
			textcolor(0);
			printf("|||");
			gotoxy(60,23);
			printf("O");
			gotoxy(73,23);
			printf("<");
			textbackground(15);textcolor(0);
			gotoxy(44,8);
			printf("Digite o nome do contato:");
			fflush(stdin);
			textcolor(4);textbackground(0);
			gotoxy(44,9);
			printf("                       ");
			gotoxy(44,9);
			gets(rn);
			for(x=0;x<qc;x++){
				if(strcmp(rn,agenda[x].nome) == 0){
					textbackground(15);
					textcolor(0);
					gotoxy(44,12);
					printf("Nome: %s", agenda[x].nome);
					gotoxy(44,13);
					printf("Telefone: %d", agenda[x].tel);
					gotoxy(44,15);
					printf("Certeza que deseja excluir:");
					gotoxy(44,16);
					printf("1-sim 2-nao");
					gotoxy(44,17);
					textcolor(4);textbackground(0);
					printf("                       ");
					gotoxy(44,17);
					scanf("%d",&cr3);
					if(cr3 == 1){
						fflush(stdin);
						agenda[x].nome;
						fflush(stdin);
						agenda[x].tel;
						qc--;
						gotoxy(44,19);
						textbackground(15);textcolor(0);
						printf("Contato removido com sucesso...");
					}else{
						break;
					}
				
				}
			}
			getch();
		break;
	case 4:
			textbackground(0);
			for(int i=2;i<26;i++){
				for(int j=1;j<40;j++){
					gotoxy(j+40,i);
	    			printf(" ");	    
				}
			}
			for(int i=3;i<24;i++){
				for(int j=3;j<=37;j++){
					textcolor(15);
					gotoxy(j+40,i);
	    			printf("\xDB"); 
				}
			}
			textbackground(15);textcolor(0);
			gotoxy(47,23);
			textcolor(0);
			printf("|||");
			gotoxy(60,23);
			printf("O");
			gotoxy(73,23);
			printf("<");
			// Tela alterar
			textbackground(15);
			textcolor(0);
			gotoxy(52,4);
			printf("ALTERAR CONTATO");
			gotoxy(45,8);
			printf("qual campo deseja alterar:"); 
			gotoxy(45,9); 
			printf("1-Nome\t2-Telefone");
			gotoxy(45,10);
			textbackground(0);textcolor(4);
			printf("             ");
			gotoxy(45,10);
			scanf("%d",&cop4);
			textbackground(15);textcolor(0);
			if(cop4 == 1){
				gotoxy(45,13);
				printf("Digite o nome do contato que de-");
				gotoxy(45,14);
				printf("seja alterar:");
				textbackground(0);textcolor(4);
				gotoxy(45,15);
				printf("                            ");
				gotoxy(45,15);
				fflush(stdin);
				gets(ar);
				textbackground(15);textcolor(0);
				for(x=0;x<qc;x++){
					if(strcmp(ar,agenda[x].nome) == 0){
						encontrar2 = 1;
						break;
					}
				}
					if(encontrar2==1){
						for(x=0;x<qc;x++){
						if(strcmp(ar,agenda[x].nome) == 0){
						gotoxy(45,17);
						printf("Informe o NOVO Nome:");
						textbackground(0);textcolor(4);
						gotoxy(45,18);
						printf("                            ");
						gotoxy(45,18);
						fflush(stdin);
						textbackground(0);textcolor(4);
						gets(agenda[x].nome);
						gotoxy(45,22);
						textbackground(15);textcolor(0);
						printf("Nome alterardo com sucesso....");
						getch();
						}
					}
				}
			}else{
				gotoxy(45,13);
				printf("Digite o numero do contato que");
				gotoxy(45,14);
				printf("deseja alterar:");
				textbackground(0);textcolor(4);
				gotoxy(45,15);
				printf("                            ");
				gotoxy(45,15);
				fflush(stdin);
				scanf("%d",&at);
				textbackground(15);textcolor(0);
				for(x=0;x<qc;x++){
					if(at == agenda[x].tel){
						encontrar2 = 1;
						break;
					}
				}
					if(encontrar2==1){
						for(x=0;x<qc;x++){
						if(at == agenda[x].tel){
						gotoxy(45,17);
						printf("Informe o NOVO numero:");
						textbackground(0);textcolor(4);
						gotoxy(45,18);
						printf("                            ");
						gotoxy(45,18);
						textbackground(0);textcolor(4);
						scanf("%d",&agenda[x].tel);
						gotoxy(45,22);
						textbackground(15);textcolor(0);
						printf("Nome alterardo com sucesso....");
						getch();
						}
					}
				}
		}
		break;
	case 5:
		textbackground(0);
			for(int i=2;i<26;i++){
				for(int j=1;j<40;j++){
					gotoxy(j+40,i);
	    			printf(" ");	    
				}
			}
			for(int i=3;i<24;i++){
				for(int j=3;j<=37;j++){
					textcolor(15);
					gotoxy(j+40,i);
	    			printf("\xDB"); 
				}
			}
			textbackground(15);textcolor(0);
			gotoxy(47,23);
			textcolor(0);
			printf("|||");
			gotoxy(60,23);
			printf("O");
			gotoxy(73,23);
			printf("<");
			//tela lkjfs
			textbackground(15);textcolor(0);
			gotoxy(54,4);
			printf("CONTATOS");
			for(x=0;x<qc;x++){
				gotoxy(45,13);
				textcolor(0);
				printf("Nome: %s",agenda[x].nome);
				textcolor(0);
				gotoxy(45,14);
				printf("Telefone: %d",agenda[x].tel);
				textcolor(0);
				gotoxy(45,19);
				printf("1-Proximo contato");
				gotoxy(45,20);
				printf("2-Voltar");
				textcolor(4);textbackground(0);
				gotoxy(45,21);
				printf("	");
				gotoxy(45,21);
				scanf("%d",&op2);
				textbackground(15);textcolor(0);
				if(op2==1){
				}else{
					break;
				}		
			}
		break;		
}
}while(op!=6);
return 0;
}
