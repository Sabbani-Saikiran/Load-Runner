close()
{

	lr_think_time(5);

	web_url("Order.action",
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId={workingItemId}",
		"Snapshot=t7.inf",
		"Mode=HTML",
		LAST);

	return 0;
}