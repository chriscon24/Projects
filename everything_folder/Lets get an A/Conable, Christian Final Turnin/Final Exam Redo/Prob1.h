//Description: Header File for Problem 1
#ifndef PROB1_H
#define PROB1_H

template <class M>
class Prob1Random{
	private:
		M *set;     
		M  nset;     
		int  *freq;    
		int   numRand;  
	public:
		Prob1Random(const M,unsigned M *);
		~Prob1Random(void)
        { delete [] set; 
          delete [] freq; }                       
		unsigned M randFromSet(void);                   
		int *getFreq(void) const
        { return freq; }                
		unsigned M *getSet(void) const
        { return set; }                   
		int getNumRand(void) const
        { return numRand; }                 
		                                          
};

template <class M> 
Prob1Random<M>::Prob1Random(const M nset,unsigned M* set){
    this->nset = nset; 
    this->set = new unsigned M[this->nset]; 
    for(int i = 0; i < this->nset;i++) 
       this->set[i] = set[i]; 
    numRand = 0;
    freq = new int[int(this->nset)]; 
    for(int i = 0; i < int(nset); i++) 
        *(freq + i) = 0;
}

template <class M>
M Prob1Random<M>::randFromSet(void){
    int count = rand() % int(nset);
    for (int j = 0; j <= 5; j++) {
        count = rand() % int(nset);
        if (count == j)
           (*(freq + j))++; 
    }
    numRand++;
    return set[rand() % static_cast<int>(nset)];
}
#endif      
              
        
