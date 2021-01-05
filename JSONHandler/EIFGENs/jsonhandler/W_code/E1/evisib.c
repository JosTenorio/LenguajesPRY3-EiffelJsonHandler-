#include "eif_eiffel.h"
#include "eif_cecil.h"

#ifdef __cplusplus
extern "C" {
#endif

static char * type_key [] = {
(char *) 0,
"NATURAL_64_REF",
(char *) 0,
"NATURAL_16",
"STRING_8_SEARCHER",
"DISPENSER",
"FUNCTION",
(char *) 0,
(char *) 0,
"PRECONDITION_VIOLATION",
"STRING_32",
"RT_DBG_LOCAL_RECORD",
"NATURAL_8",
"ARRAY_ITERATION_CURSOR",
"ACTIVE",
"STRING_8",
"EXCEPTION",
"ARRAY",
(char *) 0,
"BAG",
"NATURAL_32_REF",
(char *) 0,
"MACHINE_EXCEPTION",
"IMMUTABLE_STRING_32",
(char *) 0,
"EXCEPTIONS",
"RAW_FILE",
(char *) 0,
"SYS_EXCEPTION",
"READABLE_STRING_8",
(char *) 0,
"REFLECTED_OBJECT",
"INTEGER_32_REF",
"LINKED_LIST",
(char *) 0,
"DYNAMIC_CHAIN",
(char *) 0,
"STRING_GENERAL",
"CHECK_VIOLATION",
"SPECIAL",
"IMMUTABLE_STRING_GENERAL",
"READABLE_STRING_32",
"ROUTINE_FAILURE",
"CONSOLE",
"OBJECT_GRAPH_BREADTH_FIRST_TRAVERSABLE",
"READABLE_STRING_GENERAL",
"ANY",
"BAD_INSPECT_VALUE",
"DOUBLE_MATH",
"STRING_32_ITERATION_CURSOR",
"PATH",
"EIFFEL_RUNTIME_EXCEPTION",
(char *) 0,
"ENCODING_IMP",
"EXCEPTION_MANAGER",
"INTEGER_32",
"NO_MORE_MEMORY",
"ARRAYED_QUEUE_ITERATION_CURSOR",
"RT_DBG_COMMON",
"NATURAL_32",
(char *) 0,
"FILE_INFO",
"STRING_HANDLER",
"COM_FAILURE",
"ADDRESS_APPLIED_TO_MELTED_FEATURE",
"LINKED_LIST_ITERATION_CURSOR",
"TYPED_POINTER",
(char *) 0,
"DEBUG_OUTPUT",
"ISE_RUNTIME",
(char *) 0,
(char *) 0,
(char *) 0,
"PLATFORM",
(char *) 0,
"POINTER_REF",
"VERSIONABLE",
(char *) 0,
(char *) 0,
"IMMUTABLE_STRING_8",
"HARDWARE_EXCEPTION",
(char *) 0,
"REFLECTOR_CONSTANTS",
"POSTCONDITION_VIOLATION",
"STD_FILES",
"OBSOLETE_EXCEPTION",
"TYPE",
"SYSTEM_STRING_FACTORY",
"REFLECTOR_HELPER",
(char *) 0,
"ISE_EXCEPTION_MANAGER",
"RT_DBG_ATTRIBUTE_RECORD",
"PRIMES",
"C_STRING",
"FILE",
"BOOLEAN",
"ENCODING",
"DYNAMIC_TABLE",
"IO_FAILURE",
"NATURAL_64",
(char *) 0,
"REFLECTED_REFERENCE_OBJECT",
(char *) 0,
(char *) 0,
(char *) 0,
"PREDICATE",
"OLD_VIOLATION",
(char *) 0,
"CSVHANDLER",
(char *) 0,
(char *) 0,
"EXCEP_CONST",
"CHARACTER_PROPERTY",
"HASH_TABLE_CURSOR",
"ARGUMENTS_32",
"OPERATING_SYSTEM_EXCEPTION",
(char *) 0,
"RT_DBG_VALUE_RECORD",
"STRING_TABLE",
"RT_DBG_INTERNAL",
"SYSTEM_STRING",
(char *) 0,
"INTEGER_64_REF",
"TABLE_ITERATION_CURSOR",
"HASH_TABLE_ITERATION_CURSOR",
"INFINITE",
"STRING_TO_REAL_CONVERTOR",
"EIFFEL_RUNTIME_PANIC",
"INTEGER_8",
"LOOP_INVARIANT_VIOLATION",
"LANGUAGE_EXCEPTION",
"TYPED_INDEXABLE_ITERATION_CURSOR",
(char *) 0,
"UNICODE_CONVERSION",
"DYNAMIC_LIST",
"REAL_32_REF",
"LINEAR",
"VOID_ASSIGNED_TO_EXPANDED",
"LINKABLE",
"ENCODING_HELPER",
"INTEGER_16",
"ENCODING_I",
"ABSTRACT_SPECIAL",
"COUNTABLE",
(char *) 0,
(char *) 0,
"TABLE",
"FLOATING_POINT_FAILURE",
(char *) 0,
"UTF_CONVERTER",
"NATIVE_STRING",
"NATIVE_STRING_HANDLER",
"SYSTEM_ENCODINGS_I",
(char *) 0,
"QUEUE",
"ASSERTION_VIOLATION",
"OBJECT_GRAPH_TRAVERSABLE",
(char *) 0,
"SYSTEM_ENCODINGS",
"ITERATION_CURSOR",
"SET",
"REAL_64",
(char *) 0,
"FILE_ITERATION_CURSOR",
"INDEXABLE_ITERATION_CURSOR",
"HASH_TABLE",
"REAL_64_REF",
"MATH_CONST",
"NATURAL_16_REF",
"OPERATING_SYSTEM_SIGNAL_FAILURE",
"STRING_ITERATION_CURSOR",
"COLLECTION",
"SERIALIZATION_FAILURE",
"RESIZABLE",
"INTEGER_INTERVAL",
(char *) 0,
"STRING_32_SEARCHER",
"CURSOR",
(char *) 0,
"ARGUMENTS",
"INTEGER_16_REF",
"REFLECTOR",
"EIFFELSTUDIO_SPECIFIC_LANGUAGE_EXCEPTION",
"INTERNAL",
"BOUNDED",
"TABLE_ITERABLE",
"POINTER",
(char *) 0,
(char *) 0,
"TUPLE",
(char *) 0,
"TO_SPECIAL",
(char *) 0,
"CONTAINER",
(char *) 0,
"EIF_EXCEPTION",
(char *) 0,
"PROCEDURE",
"OBJECT_GRAPH_MARKER",
(char *) 0,
"DATA_EXCEPTION",
"FINITE",
"INTEGER_8_REF",
"UNBOUNDED",
"RT_EXTENSION_COMMON",
"BOX",
"UNIX_FILE_INFO",
"RT_DBG_EXECUTION_PARAMETERS",
"REFLECTED_COPY_SEMANTICS_OBJECT",
"CREATE_ON_DEFERRED",
"COUNTABLE_SEQUENCE",
"DEVELOPER_EXCEPTION",
"PART_COMPARABLE",
"RT_DBG_EXECUTION_RECORDER",
"BOOLEAN_REF",
"MISMATCH_FAILURE",
"INDEXABLE",
"INVARIANT_VIOLATION",
"GENERAL_SPECIAL_ITERATION_CURSOR",
"NUMERIC",
"SPECIAL_ITERATION_CURSOR",
"ARRAYED_LIST_ITERATION_CURSOR",
"VOID_TARGET",
"NATIVE_ARRAY",
"REFACTORING_HELPER",
"RT_EXTENSION",
"MISMATCH_CORRECTOR",
"CHAIN",
"IO_MEDIUM",
"NATURAL_8_REF",
"HASHABLE",
"INTEGER_OVERFLOW_CHECKER",
"REAL_32",
"SEQUENCE",
"OPERATING_ENVIRONMENT",
(char *) 0,
(char *) 0,
"RESUMPTION_FAILURE",
"ROUTINE",
"INTEGER_64",
"ARRAYED_LIST",
(char *) 0,
"STRING_8_ITERATION_CURSOR",
"COMPARABLE",
(char *) 0,
(char *) 0,
"CHARACTER_32_REF",
"READABLE_INDEXABLE",
"STRING_TO_INTEGER_CONVERTOR",
"TRAVERSABLE",
(char *) 0,
"RT_DBG_FIELD_RECORD",
"LINKED_LIST_CURSOR",
"STRING_SEARCHER",
"OPERATING_SYSTEM_FAILURE",
"RT_EXTENSION_GENERAL",
"APPLICATION",
"CODE_PAGE_CONSTANTS",
"EXCEPTION_IN_SIGNAL_HANDLER_FAILURE",
"ARRAYED_LIST_CURSOR",
"ARRAYED_QUEUE",
"VARIANT_VIOLATION",
(char *) 0,
"RESCUE_FAILURE",
"SYSTEM_ENCODINGS_IMP",
(char *) 0,
"MANAGED_POINTER",
"CHARACTER_8_REF",
"EXCEPTION_MANAGER_FACTORY",
(char *) 0,
"HEXADECIMAL_STRING_TO_INTEGER_CONVERTER",
"CHARACTER_32",
"CHARACTER_8",
"CELL",
"NUMERIC_INFORMATION",
"LIST",
"EXTERNAL_FAILURE",
(char *) 0,
"ITERABLE",
(char *) 0,
"CURSOR_STRUCTURE",
"BILINEAR",
"READABLE_INDEXABLE_ITERATION_CURSOR",
(char *) 0,
(char *) 0,
"PLAIN_TEXT_FILE",
"STRING_TO_NUMERIC_CONVERTOR",
"RT_DBG_CALL_RECORD",
"DISPOSABLE",
"MISMATCH_INFORMATION",
"EXECUTION_ENVIRONMENT",
(char *) 0,
"CODE_PAGES",
};

static uint32 patterns232 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types232 [] = {
541,
};

static uint32 patterns9 [] = {
SK_REF,
SK_BOOL,
SK_REF,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types9 [] = {
202,
543,
};

static uint32 patterns209 [] = {
SK_BOOL,
SK_POINTER,
SK_REF,
SK_REAL64,
SK_UINT8,
SK_REAL32,
SK_UINT32,
SK_UINT16,
SK_INT8,
SK_UINT64,
SK_INT32,
SK_INT16,
SK_CHAR8,
SK_INT64,
SK_CHAR32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types209 [] = {
560,
709,
712,
715,
752,
753,
754,
755,
756,
757,
758,
759,
760,
761,
762,
};

static uint32 patterns51 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types51 [] = {
298,
313,
356,
392,
428,
464,
483,
506,
602,
648,
686,
717,
};

static uint32 patterns192 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types192 [] = {
211,
235,
269,
286,
331,
374,
410,
446,
514,
620,
656,
735,
};

static uint32 patterns5 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types5 [] = {
297,
312,
355,
391,
427,
463,
482,
505,
601,
647,
685,
716,
};

static uint32 patterns197 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types197 [] = {
212,
236,
270,
287,
332,
375,
411,
447,
515,
621,
657,
736,
};

static uint32 patterns161 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types161 [] = {
189,
306,
};

static uint32 patterns196 [] = {
SK_INT32,
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types196 [] = {
217,
303,
340,
383,
419,
455,
488,
523,
629,
665,
691,
744,
};

static uint32 patterns3 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types3 [] = {
294,
321,
364,
400,
436,
466,
479,
495,
610,
637,
682,
725,
};

static uint32 patterns230 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types230 [] = {
542,
};

static uint32 patterns204 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types204 [] = {
190,
307,
};

static uint32 patterns11 [] = {
SK_REF,
SK_BOOL,
SK_UINT32,
SK_UINT16,
SK_UINT8,
SK_CHAR32,
SK_CHAR8,
SK_INT64,
SK_INT32,
SK_INT16,
SK_INT8,
SK_UINT64,
SK_POINTER,
SK_REAL64,
SK_REAL32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types11 [] = {
204,
546,
550,
554,
558,
563,
567,
571,
575,
579,
583,
587,
595,
599,
675,
};

static uint32 patterns12 [] = {
SK_REF,
SK_POINTER,
SK_POINTER,
SK_REAL64,
SK_REAL32,
SK_UINT8,
SK_UINT16,
SK_UINT32,
SK_UINT64,
SK_INT8,
SK_INT16,
SK_INT32,
SK_INT64,
SK_CHAR8,
SK_CHAR32,
SK_BOOL,
SK_EXP + 10,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types12 [] = {
184,
188,
205,
243,
244,
245,
246,
247,
248,
249,
250,
251,
252,
253,
254,
255,
290,
547,
551,
555,
559,
564,
568,
572,
576,
580,
584,
588,
596,
600,
676,
};

static uint32 patterns208 [] = {
SK_POINTER,
SK_REAL64,
SK_REAL32,
SK_UINT8,
SK_UINT32,
SK_REF,
SK_INT64,
SK_CHAR8,
SK_INT32,
SK_UINT16,
SK_UINT64,
SK_INT8,
SK_INT16,
SK_CHAR32,
SK_BOOL,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types208 [] = {
593,
597,
673,
695,
696,
698,
703,
705,
713,
763,
764,
765,
766,
767,
768,
};

static uint32 patterns83 [] = {
SK_INT32,
SK_INT32,
SK_REF,
SK_INT32,
SK_POINTER,
SK_INT32,
SK_REF,
SK_REF,
SK_REAL32,
SK_INT32,
SK_REAL64,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_UINT64,
SK_INT32,
SK_INT32,
SK_REF,
SK_UINT16,
SK_INT32,
SK_BOOL,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types83 [] = {
222,
305,
345,
350,
388,
424,
460,
491,
528,
533,
634,
670,
693,
749,
};

static uint32 patterns10 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types10 [] = {
704,
};

static uint32 patterns143 [] = {
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types143 [] = {
348,
531,
};

static uint32 patterns213 [] = {
SK_REF,
SK_REF,
SK_INT32,
SK_REF,
SK_INT32,
SK_INT32,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types213 [] = {
353,
536,
591,
701,
};

static uint32 patterns177 [] = {
SK_REF,
SK_REF,
SK_INT32,
SK_REF,
SK_INT32,
SK_INT32,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types177 [] = {
352,
535,
590,
700,
};

static uint32 patterns224 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types224 [] = {
708,
};

static uint32 patterns189 [] = {
SK_INT32,
SK_REF,
SK_REF,
SK_REF,
SK_CHAR32,
SK_REF,
SK_CHAR8,
SK_REF,
SK_POINTER,
SK_REF,
SK_REAL32,
SK_REF,
SK_REAL64,
SK_REF,
SK_UINT8,
SK_REF,
SK_UINT64,
SK_REF,
SK_UINT16,
SK_REF,
SK_BOOL,
SK_REF,
SK_UINT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types189 [] = {
194,
227,
265,
282,
320,
363,
399,
435,
503,
609,
645,
724,
};

static uint32 patterns138 [] = {
SK_INT32,
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types138 [] = {
216,
302,
339,
382,
418,
454,
487,
522,
628,
664,
690,
743,
};

static uint32 patterns49 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types49 [] = {
201,
231,
257,
274,
327,
370,
406,
442,
510,
616,
652,
731,
};

static uint32 patterns205 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types205 [] = {
191,
308,
};

static uint32 patterns199 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types199 [] = {
707,
};

static uint32 patterns140 [] = {
SK_INT32,
SK_INT32,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_POINTER,
SK_INT32,
SK_REF,
SK_REF,
SK_REAL32,
SK_INT32,
SK_REAL64,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_INT32,
SK_INT32,
SK_REF,
SK_UINT16,
SK_INT32,
SK_BOOL,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types140 [] = {
221,
242,
272,
289,
344,
351,
387,
423,
459,
527,
534,
633,
669,
748,
};

static uint32 patterns231 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types231 [] = {
540,
};

static uint32 patterns47 [] = {
SK_REF,
SK_INT32,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types47 [] = {
187,
197,
260,
277,
318,
361,
397,
433,
501,
607,
643,
722,
};

static uint32 patterns191 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types191 [] = {
494,
};

static uint32 patterns128 [] = {
SK_REF,
SK_INT32,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types128 [] = {
185,
195,
263,
280,
316,
359,
395,
431,
499,
605,
641,
720,
};

static uint32 patterns99 [] = {
SK_REF,
SK_REF,
SK_INT32,
SK_REF,
SK_INT32,
SK_INT32,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types99 [] = {
349,
532,
589,
699,
};

static uint32 patterns222 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types222 [] = {
213,
237,
271,
288,
333,
376,
412,
448,
516,
622,
658,
737,
};

static uint32 patterns52 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types52 [] = {
299,
337,
380,
416,
452,
471,
484,
520,
626,
662,
687,
741,
};

static uint32 patterns139 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types139 [] = {
300,
338,
381,
417,
453,
472,
485,
521,
627,
663,
688,
742,
};

static uint32 patterns179 [] = {
SK_REF,
SK_REF,
SK_INT32,
SK_REF,
SK_INT32,
SK_INT32,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types179 [] = {
354,
537,
592,
702,
};

static uint32 patterns54 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types54 [] = {
301,
347,
390,
426,
462,
473,
486,
530,
636,
672,
689,
751,
};

static uint32 patterns193 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types193 [] = {
209,
233,
261,
278,
329,
372,
408,
444,
512,
618,
654,
733,
};

static uint32 patterns8 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types8 [] = {
208,
};

static uint32 patterns195 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types195 [] = {
200,
230,
266,
283,
326,
369,
405,
441,
509,
615,
651,
730,
};

static uint32 patterns178 [] = {
SK_INT32,
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_CHAR32,
SK_CHAR8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types178 [] = {
218,
304,
341,
384,
420,
456,
489,
493,
524,
630,
666,
745,
};

static uint32 patterns223 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types223 [] = {
214,
238,
267,
284,
334,
377,
413,
449,
517,
623,
659,
738,
};

static uint32 patterns142 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types142 [] = {
706,
};

static uint32 patterns53 [] = {
SK_INT32,
SK_INT32,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_POINTER,
SK_INT32,
SK_REAL32,
SK_INT32,
SK_REAL64,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_INT32,
SK_UINT16,
SK_INT32,
SK_BOOL,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types53 [] = {
220,
241,
256,
273,
343,
386,
422,
458,
526,
632,
668,
747,
};

static uint32 patterns127 [] = {
SK_REF,
SK_REF,
SK_POINTER,
SK_REF,
SK_REAL32,
SK_REF,
SK_REAL64,
SK_REF,
SK_UINT8,
SK_REF,
SK_INT32,
SK_REF,
SK_CHAR32,
SK_REF,
SK_UINT64,
SK_REF,
SK_UINT16,
SK_REF,
SK_BOOL,
SK_REF,
SK_CHAR8,
SK_REF,
SK_UINT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types127 [] = {
293,
314,
357,
393,
429,
465,
478,
497,
603,
639,
681,
718,
};

static uint32 patterns42 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types42 [] = {
295,
322,
365,
401,
437,
467,
480,
496,
611,
638,
683,
726,
};

static uint32 patterns137 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types137 [] = {
292,
336,
379,
415,
451,
470,
477,
519,
625,
661,
680,
740,
};

static uint32 patterns43 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types43 [] = {
296,
323,
366,
402,
438,
468,
481,
504,
612,
646,
684,
727,
};

static uint32 patterns202 [] = {
SK_INT32,
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types202 [] = {
219,
240,
342,
385,
421,
457,
490,
525,
631,
667,
692,
746,
};

static uint32 patterns136 [] = {
SK_INT32,
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types136 [] = {
199,
229,
325,
368,
404,
440,
475,
508,
614,
650,
678,
729,
};

static uint32 patterns7 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types7 [] = {
206,
};

static uint32 patterns50 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types50 [] = {
291,
324,
367,
403,
439,
469,
474,
507,
613,
649,
677,
728,
};

static uint32 patterns45 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types45 [] = {
198,
228,
262,
279,
315,
358,
394,
430,
498,
604,
640,
719,
};

static uint32 patterns134 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types134 [] = {
207,
232,
258,
275,
328,
371,
407,
443,
511,
617,
653,
732,
};

static uint32 patterns207 [] = {
SK_BOOL,
SK_UINT32,
SK_UINT16,
SK_UINT8,
SK_CHAR32,
SK_CHAR8,
SK_INT64,
SK_INT32,
SK_INT16,
SK_INT8,
SK_UINT64,
SK_REAL64,
SK_REF,
SK_REAL32,
SK_POINTER,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types207 [] = {
544,
548,
552,
556,
561,
565,
569,
573,
577,
581,
585,
697,
710,
711,
714,
};

static uint32 patterns206 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types206 [] = {
224,
310,
};

static uint32 patterns225 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types225 [] = {
539,
};

static uint32 patterns79 [] = {
SK_INT32,
SK_REF,
SK_UINT64,
SK_CHAR32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types79 [] = {
192,
309,
311,
538,
};

static uint32 patterns157 [] = {
SK_INT32,
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types157 [] = {
223,
225,
346,
389,
425,
461,
492,
529,
635,
671,
694,
750,
};

static uint32 patterns48 [] = {
SK_REF,
SK_INT32,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types48 [] = {
186,
196,
259,
276,
317,
360,
396,
432,
500,
606,
642,
721,
};

static uint32 patterns133 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types133 [] = {
210,
234,
268,
285,
330,
373,
409,
445,
513,
619,
655,
734,
};

static uint32 patterns194 [] = {
SK_INT32,
SK_REF,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_CHAR32,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_CHAR8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types194 [] = {
215,
239,
335,
378,
414,
450,
476,
518,
624,
660,
679,
739,
};

static uint32 patterns129 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_UINT64,
SK_UINT16,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types129 [] = {
193,
226,
264,
281,
319,
362,
398,
434,
502,
608,
644,
723,
};

static struct cecil_info type_val[] = {
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 141, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 149, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 36, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns232, dyn_types232},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns9, dyn_types9},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 79, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 176, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns209, dyn_types209},
{(int) 0, (EIF_TYPE_INDEX) 152, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns51, dyn_types51},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns192, dyn_types192},
{(int) 0, (EIF_TYPE_INDEX) 179, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 45, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns5, dyn_types5},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns197, dyn_types197},
{(int) 0, (EIF_TYPE_INDEX) 144, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 47, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 175, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 44, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 121, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 58, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 177, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 98, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 132, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns161, dyn_types161},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns196, dyn_types196},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 173, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 82, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns3, dyn_types3},
{(int) 0, (EIF_TYPE_INDEX) 172, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 174, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 73, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 180, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 18, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 171, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 72, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 23, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 115, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 127, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 62, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 182, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 26, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 134, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 63, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns230, dyn_types230},
{(int) 0, (EIF_TYPE_INDEX) 33, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 146, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 105, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 88, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 51, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 75, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns204, dyn_types204},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns11, dyn_types11},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 107, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 12, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 29, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 168, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 2, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 178, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 48, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 97, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 78, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 13, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 54, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns12, dyn_types12},
{(int) 0, (EIF_TYPE_INDEX) 6, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 24, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 27, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns208, dyn_types208},
{(int) 0, (EIF_TYPE_INDEX) 119, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 89, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 120, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 167, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 5, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns83, dyn_types83},
{(int) 0, (EIF_TYPE_INDEX) 68, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 143, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 104, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns10, dyn_types10},
{(int) 0, (EIF_TYPE_INDEX) 59, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 1, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 28, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 7, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 92, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 117, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 50, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 110, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns143, dyn_types143},
{(int) 0, (EIF_TYPE_INDEX) 101, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 8, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 129, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns213, dyn_types213},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns177, dyn_types177},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns224, dyn_types224},
{(int) 0, (EIF_TYPE_INDEX) 41, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 60, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 140, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 80, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 69, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns189, dyn_types189},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 183, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns138, dyn_types138},
{(int) 0, (EIF_TYPE_INDEX) 153, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns49, dyn_types49},
{(int) 0, (EIF_TYPE_INDEX) 71, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns205, dyn_types205},
{(int) 0, (EIF_TYPE_INDEX) 16, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 137, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 181, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 109, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns199, dyn_types199},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns140, dyn_types140},
{(int) 0, (EIF_TYPE_INDEX) 49, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 11, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 96, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 94, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 19, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns231, dyn_types231},
{(int) 0, (EIF_TYPE_INDEX) 77, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 17, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 4, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns47, dyn_types47},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns191, dyn_types191},
{(int) 0, (EIF_TYPE_INDEX) 158, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 112, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns128, dyn_types128},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns99, dyn_types99},
{(int) 0, (EIF_TYPE_INDEX) 156, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 22, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 147, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 53, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 114, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns222, dyn_types222},
{(int) 0, (EIF_TYPE_INDEX) 66, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns52, dyn_types52},
{(int) 0, (EIF_TYPE_INDEX) 123, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 35, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 91, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 113, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 135, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 99, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 74, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 100, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns139, dyn_types139},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns179, dyn_types179},
{(int) 0, (EIF_TYPE_INDEX) 170, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 128, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns54, dyn_types54},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns193, dyn_types193},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 61, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns8, dyn_types8},
{(int) 0, (EIF_TYPE_INDEX) 21, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 65, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns195, dyn_types195},
{(int) 0, (EIF_TYPE_INDEX) 138, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns178, dyn_types178},
{(int) 0, (EIF_TYPE_INDEX) 30, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns223, dyn_types223},
{(int) 0, (EIF_TYPE_INDEX) 106, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 9, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 103, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 76, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns142, dyn_types142},
{(int) 0, (EIF_TYPE_INDEX) 46, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 84, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 102, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 165, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 67, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns53, dyn_types53},
{(int) 0, (EIF_TYPE_INDEX) 83, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns127, dyn_types127},
{(int) 0, (EIF_TYPE_INDEX) 111, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns42, dyn_types42},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns137, dyn_types137},
{(int) 0, (EIF_TYPE_INDEX) 70, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns43, dyn_types43},
{(int) 0, (EIF_TYPE_INDEX) 25, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 32, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 124, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns202, dyn_types202},
{(int) 0, (EIF_TYPE_INDEX) 90, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 150, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 126, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 38, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 155, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns136, dyn_types136},
{(int) 0, (EIF_TYPE_INDEX) 14, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 56, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns7, dyn_types7},
{(int) 0, (EIF_TYPE_INDEX) 131, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns50, dyn_types50},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 116, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 85, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 159, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns45, dyn_types45},
{(int) 0, (EIF_TYPE_INDEX) 40, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns134, dyn_types134},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns207, dyn_types207},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns206, dyn_types206},
{(int) 0, (EIF_TYPE_INDEX) 34, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 52, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 31, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 118, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 3, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 55, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 93, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns225, dyn_types225},
{(int) 0, (EIF_TYPE_INDEX) 81, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 57, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 20, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 87, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 162, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 43, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 42, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 161, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 164, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns79, dyn_types79},
{(int) 0, (EIF_TYPE_INDEX) 37, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns157, dyn_types157},
{(int) 0, (EIF_TYPE_INDEX) 64, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns48, dyn_types48},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns133, dyn_types133},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns194, dyn_types194},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns129, dyn_types129},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 122, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 39, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 108, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 86, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 125, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 95, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 15, NULL, NULL},
};

struct ctable egc_ce_type_init = {(int32) 293, sizeof(struct cecil_info),type_key, (char *) type_val};

static char * exp_type_key [] = {
"NATURAL_64",
"NATURAL_32",
"BOOLEAN",
"NATURAL_8",
(char *) 0,
(char *) 0,
"INTEGER_16",
(char *) 0,
"INTEGER_32",
"CHARACTER_8",
"UTF_CONVERTER",
(char *) 0,
"INTEGER_8",
(char *) 0,
"REAL_32",
"POINTER",
"CHARACTER_32",
"TYPED_POINTER",
(char *) 0,
"INTEGER_64",
(char *) 0,
"REAL_64",
"NATURAL_16",
};

static uint32 exp_patterns11 [] = {
SK_REF,
SK_BOOL,
SK_UINT32,
SK_UINT16,
SK_UINT8,
SK_CHAR32,
SK_CHAR8,
SK_INT64,
SK_INT32,
SK_INT16,
SK_INT8,
SK_UINT64,
SK_POINTER,
SK_REAL64,
SK_REAL32,
SK_INVALID
};

static EIF_TYPE_INDEX exp_dyn_types11 [] = {
203,
545,
549,
553,
557,
562,
566,
570,
574,
578,
582,
586,
594,
598,
674,
};

static struct cecil_info exp_type_val[] = {
{(int) 0, (EIF_TYPE_INDEX) 142, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 145, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 166, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 151, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 136, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 133, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 163, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 10, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 139, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 154, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 169, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 160, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, exp_patterns11, exp_dyn_types11},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 130, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 157, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 148, NULL, NULL},
};

struct ctable egc_ce_exp_type_init = {(int32) 23, sizeof(struct cecil_info),exp_type_key, (char *) exp_type_val};


#ifdef __cplusplus
}
#endif
