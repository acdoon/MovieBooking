#ifndef PAYMENT_H
#define PAYMENT_H
#include "enums/PaymentStatus.h"
class Payment{
 int id;
 PaymentStatus status;
 public:    
    void setPaymentStatus(PaymentStatus );
    PaymentStatus getPaymentSatus();
};
#endif