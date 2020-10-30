// 	rule -> just class
// 	trule -> class + title
// 	ffs -> isfakefullscreen
// 									class, instance, title, tags, 	isfloating, isterminal, noswallow, isfakefullscreen, monitor
#define _tag(i) 1 << (i - 1)
#define rule_tag(classname, tag)	{ classname, NULL, NULL, _tag(tag)	, 0, 	0, 			0, 			0, 				 	0 }
#define trule_tag(classname, title, tag) {classname,NULL,title,_tag(tag), 0,	0,			0,			0,					0 }
#define rule_float(classname)		{ classname, NULL, NULL, 0			, 1, 	0, 			0, 			0, 					0 }
#define rule_terminal(classname)	{ classname, NULL, NULL, 0			, 0, 	1, 			0, 			0, 					0 }
#define rule_ffs(classname)			{ classname, NULL, NULL, 0			, 0, 	0, 			0, 			1,					0 }
#define rule_tag_ffs(classname, tag) { classname, NULL, NULL, _tag(tag) , 0, 	0, 			0, 			1, 				 	0 }
