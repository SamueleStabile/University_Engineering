dio.c
for(int i = 0; i < n; i++){
			for(int k = 0; k < 3 ; k++){

				if(primo == 0){
				temp = str[i][k] -'0';
				numero = (numero*10) + temp;
				printf("\nPRIMO[%d] ", numero);
				}

					if(str[i][k] == '+' || str[i][k] == '-' || str[i][k] == '*' || str[i][k] == '/'){
						app = k+1;
						operatore = str[i][k];
						printf("\nOPERAZIONE[%c]", operatore);
						primo = 1;		
					}

				if(primo == 1){
				temp2 = str[i][app] -'0';
				numero2 = (numero2*10) + temp2;
				printf("\nSECONDO[%d] ", numero2);
				app++;
				}
					}

				/*if(str[i][k] != '+' && str[i][k] != '-' && str[i][k] != '*' && str[i][k] != '/'){
					temp = str[i][k] -'0';
					numero = (numero*10) + temp;
					printf("\nPRIMO[%d] ", numero);
				} else if(str[i][k] == '+' || str[i][k] || '-' && str[i][k] || '*' || str[i][k] == '/') {
					int app = k+1;
					operatore = str[i][k];
				}
				temp2 = str[i][app] -'0';
				numero2 = (numero2*10) + temp2;
				printf("\nSECONDO[%d] ", numero2);*/

			//operazione e assorbe in r
			printf("\n");
			numero = 0;
			numero2 = 0;
			app=0;
		}