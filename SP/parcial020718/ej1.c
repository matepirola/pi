/*escribir una funcion recursiva quue reciba un vector de enteros y su dimension y retorne:
    1 si el vector esta ordenado de forma ascendente.
    -1 si el vector esta prdenado de forma descendente.
    0 si tiene menos de 2 elementos o no esta ordenado de ninguna de las formas anteriores.
No usar funciones auxiliares.*/


int orden(int v, int dim){
    if(dim < 2){
        return 0; 
    }if(v[dim-1] < v[dim]){
        return 1; 
    }else{
        return 0; 
    }
    if(v[dim-1] > v[dim]){
        return -1; 
    }else{
        return 0; 
    } 
    return orden(v,dim-1); 
}


int orden(int v[], int dim){
    if(dim < 2){
        return 0; 
    }
    if(dim == 2){
        if(v[dim-1] < v[dim]){
            return 1; 
        }
        if(v[dim-1] > v[dim]){
            return -1; 
        }
    }
    return 0; 
    return(v, dim-1);  
}

