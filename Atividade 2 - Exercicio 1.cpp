int main(){

    char menu[] = "Bem-vindo(a)! Digite: 1 a 9 ou 0 para sair:\n";
    int escolha = -1;
    while (escolha != 0){ 

        printf("\n%s", menu); 
        scanf("%d", &escolha);
        switch (escolha)
		{
            case 0:
                printf("Finalizamos aqui.\n");
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                printf("\nVoce digitou %d", escolha);
                break;
            default:
                printf("\nVoce digitou uma opção inexistente");
                break;
        }
        

    }
    return 0;
}
