action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=120", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("jpetstore.css", 
		"URL=https://petstore.octoperf.com/css/jpetstore.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("Enter the Store", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("logo-topbar.gif", 
		"URL=https://petstore.octoperf.com/images/logo-topbar.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("separator.gif", 
		"URL=https://petstore.octoperf.com/images/separator.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("cart.gif", 
		"URL=https://petstore.octoperf.com/images/cart.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("sm_fish.gif", 
		"URL=https://petstore.octoperf.com/images/sm_fish.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("sm_birds.gif", 
		"URL=https://petstore.octoperf.com/images/sm_birds.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("splash.gif", 
		"URL=https://petstore.octoperf.com/images/splash.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("dogs_icon.gif", 
		"URL=https://petstore.octoperf.com/images/dogs_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("birds_icon.gif", 
		"URL=https://petstore.octoperf.com/images/birds_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("cats_icon.gif", 
		"URL=https://petstore.octoperf.com/images/cats_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("fish_icon.gif", 
		"URL=https://petstore.octoperf.com/images/fish_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("reptiles_icon.gif", 
		"URL=https://petstore.octoperf.com/images/reptiles_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("sm_reptiles.gif", 
		"URL=https://petstore.octoperf.com/images/sm_reptiles.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("sm_dogs.gif", 
		"URL=https://petstore.octoperf.com/images/sm_dogs.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("sm_cats.gif", 
		"URL=https://petstore.octoperf.com/images/sm_cats.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t37.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "1");

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(4);

	web_url("sm_fish.gif_2", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=DA5B503768E69CEB7951BC4B61AFB180?viewCategory=&categoryId=FISH", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("FI-SW-01", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=DA5B503768E69CEB7951BC4B61AFB180?viewCategory=&categoryId=FISH", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("Add to Cart", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("Proceed to Checkout", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}