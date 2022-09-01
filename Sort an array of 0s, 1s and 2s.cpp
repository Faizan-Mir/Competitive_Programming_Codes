void sort012(int a[], int n)
    {
        // code here 
        int count1 =0;
        int count2 =0;
        int count3 =0; 
        
        for(int i=0; i<n; i++){
            if(a[i]==0) count1++;
            else if(a[i]==1) count2++;
            else count3++;
        }
        
        for(int i=0; i<count1; i++){
            a[i]=0;
        }
        for(int i=0; i<count2; i++){
            a[count1+i]=1;
        }
        for(int i=0; i<count3; i++){
            a[count1+count2+i]=2; 
        }
    }
