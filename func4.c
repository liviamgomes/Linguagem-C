#include <stdio.h>
#include <math.h>

//funcao area do retangulo
float calcularArea(float base,float alt){
	float area;
	area=base*alt;
	return area;
}
//funcao perimetro do retangulo
float calcularPerimetro(float base,float alt){
	float perim;
	perim=(base*2)+(alt*2);
	return perim;
}
//funcao volume da caixa
float calcularVolume(float ladoA,float ladoB,float alt){
	float volCx;
	volCx=ladoA*ladoB*alt;
	return volCx;
}
//funcao area do circulo
float calcularAreaCirc(float raio){
	float areaCirc;
	areaCirc=3.14*(raio*raio);
	return areaCirc;
}
//funcao perimetro do circulo
float calcularPerimCirc(float raio){
	float perimCirc;
	perimCirc=2*3.14*raio;
	return perimCirc;
}
//funcao volume do cilindro
float calcularVolCil(float raio,float alt){
	float volCil;
	volCil=3.14*alt*(raio*raio);
	return volCil;
}

//funcao hipotenusa do triangulo retangulo
float calcularHipotTriangulo(float catA,float catB){
	float hipotTri;
	hipotTri=(catA*catA)+(catB*catB);
	return hipotTri;
}
//funcao distancia entre dois pontos
float calcularDistancia(float coordA1,float coordA2,float coordB1,float coordB2){
	float dist;
	dist=sqrt(((coordA2-coordA1)*(coordA2-coordA1))+((coordB2-coordB1)*(coordB2-coordB1)));
	return dist;
}
//funcao perimetro do triangulo
float calcularPerimTriangulo(float triA,float triB,float triC){
	float perimTri;
	perimTri=triA+triB+triC;
	return perimTri;
}
//funcao area do triangulo
float calcularAreaTriangulo(float triA,float triB,float triC){
	float areaTri,semiPerim;
	semiPerim=(calcularPerimTriangulo(triA,triB,triC))/2;
	areaTri=sqrt(semiPerim*(semiPerim-triA)*(semiPerim-triB)*(semiPerim-triC));
	return areaTri;
}

int main(void){
	float baseRet, altRet, areaRet,perimRet,volCx,ladoACx,ladoBCx,altCx,raioCirc,areaCirc,perimCirc,raioCil,
	altCil,volCil,catA,catB,hipot,coordA1,coordA2,coordB1,coordB2,dist,triA,triB,triC,perimTri,areaTri;
	
	printf("Informe base e altura do retângulo: ");
	scanf("%f""%f",&baseRet,&altRet);
	
	printf("Informe lado a, lado b e altura da caixa retângular: ");
	scanf("%f""%f""%f",&ladoACx,&ladoBCx,&altCx);
	
	printf("Informe o raio do circulo: ");
	scanf("%f",&raioCirc);
	
	printf("Informe o raio e a altura do cilindro: ");
	scanf("%f""%f",&raioCil,&altCil);
	
	printf("Informe os catetos do triangulo retangulo: ");
	scanf("%f""%f",&catA,&catB);
	
	printf("Informe as coordenadas do ponto A: ");
	scanf("%f""%f",&coordA1,&coordA2);
	printf("Informe as coordenadas do ponto B: ");
	scanf("%f""%f",&coordB1,&coordB2);
	
	printf("Informe os lados do triangulo: ");
	scanf("%f""%f""%f",&triA,&triB,&triC);
	
	areaRet=calcularArea(baseRet,altRet);
	perimRet=calcularPerimetro(baseRet,altRet);
	volCx=calcularVolume(ladoACx,ladoBCx,altCx);
	areaCirc=calcularAreaCirc(raioCirc);
	perimCirc=calcularPerimCirc(raioCirc);
	volCil=calcularVolCil(raioCil,altCil);
	hipot=calcularHipotTriangulo(catA,catB);
	dist=calcularDistancia(coordA1,coordA2,coordB1,coordB2);
	perimTri=calcularPerimTriangulo(triA,triB,triC);
	areaTri=calcularAreaTriangulo(triA,triB,triC);
	
	
	printf("A área do retângulo é %.1f.\n",areaRet);
	printf("O perímetro do retângulo é %.1f.\n",perimRet);
	printf("O volume da caixa retangular é %.1f.\n",volCx);
	printf("A area do circulo é %.1f.\n",areaCirc);
	printf("O perimetro do circulo é %.1f.\n",perimCirc);
	printf("O volume do cilindro é %.1f.\n",volCil);
	printf("A hipotenusa do triangulo retangulo é %.1f.\n",hipot);
	printf("A distancia entre os dois pontos é %.1f.\n",dist);
	printf("O perimetro do triangulo é %.1f.\n",perimTri);
	printf("A area do triangulo é %.1f.\n",areaTri);
	
return 0;
}
