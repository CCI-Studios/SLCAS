<?php

$aliases['dev'] = array(
	'uri'=> 'slcas2.ccistaging.com',
	'root' => '/home/staging/subdomains/slcas2/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),
	'ssh-options'=>'-p 37241'
);

$aliases['live'] = array(
	'uri'=> 'slcas.on.ca',
	'root' => '/home/slcas/subdomains/live/public_html',
	'remote-host'=> 'host.lambtonshield.com',
	'remote-user'=> 'slcas',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);
