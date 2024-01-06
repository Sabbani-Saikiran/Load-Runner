Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(8);

	web_submit_form("reserve.php", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value={source}", ENDITEM, 
		"Name=toPort", "Value={destination}", ENDITEM, 
		LAST);

	web_submit_form("purchase.php", 
		"Ordinal=1", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzESWAlgdZD1gGcJJRIFDR87IvsSBQ2U1FseEgUNRmcVfRIFDfKo5J0SBQ2gOKZlEgUN6vDYJxIFDYbgKPASBQ14tFrJEgUNUk1bIRIFDdGFyLghOjPq5EZxRW4=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	return 0;
}