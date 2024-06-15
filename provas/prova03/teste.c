void merge(int v[],int n){
        int meio, i, j, k;
        int* auxiliar;
auxiliar =(int*) malloc(n * sizeof(int));
    if (auxiliar==NULL){
    return;}
meio = n/2;
i = 0; k=0;
j = meio;
        while (i < meio && j < n) {
            if (v[i] <= v[j]) {auxiliar[k] = v[i++];}else {auxiliar[k] = v[j++];} ++k;}if (i == meio) {while (j < n) {auxiliar[k++] = v[j++]; }}else {while (i < meio) {auxiliar[k++] = v[i++]; }}}