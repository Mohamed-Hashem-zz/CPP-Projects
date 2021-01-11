#include "Store.h"

Store::Store ( int record , string toolName , int quantity , double cost )
{
	setToolName ( toolName );
	setRecordNumber ( record );
	setQuantity ( quantity );
	setCost ( cost );
}

void Store::setRecordNumber ( int record) { RecordNumber = record; }
int Store::getRecordNumber () { return RecordNumber; }

void Store::setToolName ( string toolName ) { ToolName = toolName; }
string Store::getToolName () { return ToolName; }

void Store::setQuantity ( int quantity ) { this->Quantity = quantity; }
int Store::getQuantity () { return Quantity; }

void Store::setCost ( double cost ) { this->Cost = cost; }
double Store::getCost () { return Cost; }

Store::~Store ()
{ }
