<?php

$aliases['dev'] = array(
	'uri'=> 'slcas.ccistaging.com',
	'root' => '/home/staging/subdomains/slcas2/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),
);

$aliases['live'] = array(
	'uri'=> 'www.slcas.on.ca',
	'root' => '/home/slcas/subdomains/live/public_html',
	'remote-host'=> 'host.cciserver2.com',
	'remote-user'=> 'slcas',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
		'%drush-script'=> '/home/slcas/.composer/vendor/bin/drush'
	)
);
