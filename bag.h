#ifndef BAG_H
#define BAG_H

/***********************************************************
 * Class: Bag
 * Description: Holds ints...for now
 ***********************************************************/
class Bag
{
private:
   int capacity;
   int size;
   int currentAddIndex;
   int* data;

public:
   Bag(){

      this->data = new int[5];
      this->capacity = 5;
      this->size = 0;
      this->currentAddIndex = 0;
   }
				
   // Getters
   int getCapacity(){return capacity;}
   int getCount(){return size;}

   int getItem(int index){return data[index];}
   void addItem(int item){
      data[currentAddIndex] = item;
     
      size += 1;
   }
};

#endif

