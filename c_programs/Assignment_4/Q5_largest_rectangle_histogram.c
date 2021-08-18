int largestRectangleArea(int* heights, int heightsSize){

    int max = 0;
    
    for(int i = 0; i < heightsSize; i++){
        
        int temp = heights[i];
        int mtemp = heights[i];
        
        for(int j = i-1; j >= 0; j--){
            
            temp = heights[j] > temp ? temp: heights[j];
            
            if(temp * (i - j + 1) > mtemp){
                
                mtemp = temp * (i - j + 1);
            }
        }
        
        if(mtemp > max){
            
            max = mtemp;
        }
    }
    
    return max;
}
