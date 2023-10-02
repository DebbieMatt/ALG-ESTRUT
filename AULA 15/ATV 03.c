#include <stdio.h>
#include <string.h>

int main()
{
    char user[30], passw[30], i;

    printf("Por favor, cadastre um usuario: ");
    scanf("%s", &user[i]);

    printf("Por favor, cadastre senha: ");
    scanf("%s", &passw[i]);

    int tent = 3, aut = 0;
    char tent_user[30], tent_passw[30];

    while((tent>0) && (!aut))
    {
        printf("Digite novamente seu usuario: ");
        scanf("%s", &tent_user[i]);

        printf("Digite novamente sua senha: ");
        scanf("%s", &tent_passw[i]);

        if ((strcmp(user, tent_user) == 0 ) && (strcmp(passw, tent_passw) == 0))
        {
            aut = 1; // Autenticado com sucesso
            printf("Acesso aprovado");
        }
        else
        {
            tent--;;
            if (tent > 0)
            {
                printf("Login falhou. Tentativas restantes: %d\n", tent);
            }
            else
            {
                printf("Tentativas esgotadas.\n");
                printf("Encerrando o programa.");
            }
        }
    }

    return 0;
}