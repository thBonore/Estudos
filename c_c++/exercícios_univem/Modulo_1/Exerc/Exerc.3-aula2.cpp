#include <stdio.h>

main(){	
	float vgasolina,vpago,result;
	
	printf("Informe o pre�o da gasolina ->	");
	scanf("%f",&vgasolina);
	
	printf("Informe o pre�o pago ->	");
	scanf("%f",&vpago);
	
	result=vgasolina/vpago;
	printf("Listro colocado �: %.2f",result);
}
