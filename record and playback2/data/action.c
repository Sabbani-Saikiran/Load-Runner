Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_reg_find("Text=Welcome to JPetStore 6", 
		LAST);

	web_reg_find("Text=Welcome to JPetStore 6", 
		LAST);

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=120", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(19);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(6);

	web_image("sm_fish.gif", 
		"Src=../images/sm_fish.gif", 
		"Snapshot=t6.inf", 
		LAST);

	web_link("FI-SW-01", 
		"Text=FI-SW-01", 
		"Snapshot=t7.inf", 
		LAST);

	lr_think_time(4);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=2", 
		"Snapshot=t8.inf", 
		LAST);

	web_link("Proceed to Checkout", 
		"Text=Proceed to Checkout", 
		"Snapshot=t9.inf", 
		LAST);

	return 0;
}