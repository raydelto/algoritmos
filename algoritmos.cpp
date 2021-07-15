#include <iostream>

/*

La notación asintótica sirve para medir la complejidad de un algoritmo.


Big O Notation (El peor de los casos)

O(1)
O(N Log(N))
O(N)
O(N^2)
O(N^3)



*/

int desordenado[]{ 123,2,4,5,45,29,545,349,348,1983, 12001 };

int numeros[] = { 1, 3 , 5, 6, 8, 9 };


/*

{ 2,4,123,5,45,29,545,349,348,1983, 12001 }


{ 1, 3 , 5}  {6, 8, 9 }*/


void imprimir()
{
	int tamano = sizeof(desordenado) / sizeof(int);
	for (int i = 0; i < tamano; i++)
	{
		std::cout << desordenado[i] << std::endl;
	}

}

void ordenaBurbuja()
{
	int contador = 0;
	int tamano = sizeof(desordenado) / sizeof(int);
	for (int i = 0; i < tamano; i++)
	{
		for (int j = 0; j < tamano - 1; j++)
		{
			contador++;
			if (desordenado[j] > desordenado[j + 1])
			{
				//Intercambiar valores
				int temporal = desordenado[j];
				desordenado[j] = desordenado[j + 1];
				desordenado[j + 1] = temporal;
			}
		}
	}
	std::cout << "Se efectuaron " << contador << " vueltas " << std::endl;
}


void ordenaBurbujaOptimizada()
{
	int contador = 0;
	int tamano = sizeof(desordenado) / sizeof(int);
	bool intercambio = false;
	do
	{
		intercambio = false;
		for (int j = 0; j < tamano - 1; j++)
		{
			contador++;
			if (desordenado[j] > desordenado[j + 1])
			{
				intercambio = true;
				//Intercambiar valores
				int temporal = desordenado[j];
				desordenado[j] = desordenado[j + 1];
				desordenado[j + 1] = temporal;
			}
		}
	} while (intercambio);

	std::cout << "Se efectuaron " << contador << " vueltas " << std::endl;
}



bool busquedaLineal(int numero)
{
	int tamano = sizeof(numeros) / sizeof(int);
	std::cout << "El tamaño del arreglo es " << tamano << std::endl;
	for (int i = 0; i < tamano; i++)
	{
		if (numeros[i] == numero)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	/*int numero;
	std::cout << "Introduzca un número: ";
	std::cin >> numero;
	if (busquedaLineal(numero))
	{
		std::cout << "El número " << numero << " está contenido en el arreglo" << std::endl;
	}
	else
	{
		std::cout << "El número " << numero << " NO está contenido en el arreglo" << std::endl;
	}*/
	imprimir();
	ordenaBurbujaOptimizada();
	std::cout << "Arreglo ordenado: " << std::endl;
	imprimir();


	return 0;

}
