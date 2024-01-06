close()
{

	lr_think_time(4);

	web_url("Order.action", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-18", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}