#include <iostream>

class tankHelfer {
    public:
        double calcPrice()
        {
            
            switch (this->fuelType) 
            {
                case 1:
                    this->price = this->superPrice * this->fuelAmount;
                    break;
                case 2:
                    this->price = this->superPlusPrice * this->fuelAmount;
                    break;
                case 3:
                    this->price = this->dieselPrice * this->fuelAmount;
                    break;
                case 4:
                    std::exit(0);
                default:
                    break;
            }
            
            if (this->rabatt > 0)
            {
                this->price = this->price - (this->price * this->rabatt);
            }
            return this->price;
        }

        void setRabatt(double rabatt)
        {
            this->rabatt = rabatt;
        }

        void setFuelType(short fuelType)
        {
            this->fuelType = fuelType;
        }

        void setFuelAmount(double fuelAmount)
        {
            this->fuelAmount = fuelAmount;
        }

        double getRabatt()
        {
            return this->rabatt;
        }

        double getFuelAmount()
        {
            return this->fuelAmount;
        }

        short getFuelType()
        {
            return this->fuelType;
        }
    protected:
    private:
        const double superPrice = 0.42;
        const double superPlusPrice = 0.59;
        const double dieselPrice = 0.35;
        double rabatt;
        double fuelAmount;
        short fuelType;
        double price;
};