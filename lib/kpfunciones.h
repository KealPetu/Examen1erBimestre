void kpLoginKevin(){
   	const char m[26]="kevin.penafiel@epn.edu.ec";
	const char p[11]="1755968169";
	char mail[26];
	char pass[11];
	
	printf("\nIngrese sus credenciales\n");
	printf("Usuario: ");
	scanf("%s", mail);
	printf("Clave: ");
	scanf("%s", pass);
	if (m==mail && p==pass)
	{
		printf("Hola Kevin!\n");
	}
	else
	{
		printf("Gracias!\n");
	}
}

void kpMenuKevin(){
	int a;
	printf("\nKEVIN, selecciona:\n");
	printf("1 Mostrar Usuario\n2 Barra de Carga\n3 Combinatoria\n0 Salir\n");
	printf("<x> Ingresa Opc:");
	scanf("%i",&a);
	while (a==1||a==2||a==3||a==0)
	{
		if (a==1)
    	{
        printf("\n-CÉDULA: 1755968169\n-CORREO: KEVIN.PENAFIEL@EPN.EDU.EC\n-NOMBRE: kevin alexander peñafiel tuz\n");
    	}
		if (a==0)
		{
			exit(0);
		}
		if (a==2)
		{
			exit(0);
		}
		if (a==3)
		{
			exit(0);
		}
		
		
		
	}
	
    
}