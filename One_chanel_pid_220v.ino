//const PROGMEM  uint16_t power_array[] = {19999, 18929, 18650, 18453, 18296, 18163, 18047, 17943, 17848, 17760, 17679, 17602, 17530, 17462, 17397, 17335, 17276, 17219, 17164, 17111, 17060, 17010, 16962, 16915, 16870, 16826, 16782, 16740, 16699, 16659, 16619, 16581, 16543, 16506, 16469, 16434, 16398, 16364, 16330, 16297, 16264, 16231, 16199, 16168, 16137, 16106, 16076, 16047, 16017, 15988, 15960, 15931, 15903, 15876, 15848, 15821, 15795, 15768, 15742, 15716, 15690, 15665, 15640, 15615, 15590, 15566, 15542, 15518, 15494, 15471, 15447, 15424, 15401, 15378, 15356, 15333, 15311, 15289, 15267, 15245, 15224, 15202, 15181, 15160, 15139, 15118, 15097, 15077, 15056, 15036, 15016, 14996, 14976, 14956, 14936, 14917, 14897, 14878, 14859, 14840, 14821, 14802, 14783, 14764, 14746, 14727, 14709, 14691, 14672, 14654, 14636, 14618, 14601, 14583, 14565, 14548, 14530, 14513, 14495, 14478, 14461, 14444, 14427, 14410, 14393, 14376, 14360, 14343, 14326, 14310, 14294, 14277, 14261, 14245, 14228, 14212, 14196, 14180, 14164, 14149, 14133, 14117, 14101, 14086, 14070, 14055, 14039, 14024, 14009, 13993, 13978, 13963, 13948, 13933, 13918, 13903, 13888, 13873, 13858, 13843, 13828, 13814, 13799, 13785, 13770, 13755, 13741, 13727, 13712, 13698, 13684, 13669, 13655, 13641, 13627, 13613, 13599, 13585, 13571, 13557, 13543, 13529, 13515, 13501, 13488, 13474, 13460, 13447, 13433, 13420, 13406, 13393, 13379, 13366, 13352, 13339, 13326, 13312, 13299, 13286, 13273, 13259, 13246, 13233, 13220, 13207, 13194, 13181, 13168, 13155, 13142, 13129, 13116, 13104, 13091, 13078, 13065, 13052, 13040, 13027, 13015, 13002, 12989, 12977, 12964, 12952, 12939, 12927, 12914, 12902, 12889, 12877, 12865, 12852, 12840, 12828, 12816, 12803, 12791, 12779, 12767, 12755, 12743, 12730, 12718, 12706, 12694, 12682, 12670, 12658, 12646, 12634, 12622, 12611, 12599, 12587, 12575, 12563, 12551, 12540, 12528, 12516, 12504, 12493, 12481, 12469, 12458, 12446, 12434, 12423, 12411, 12399, 12388, 12376, 12365, 12353, 12342, 12330, 12319, 12307, 12296, 12285, 12273, 12262, 12250, 12239, 12228, 12216, 12205, 12194, 12183, 12171, 12160, 12149, 12138, 12126, 12115, 12104, 12093, 12082, 12070, 12059, 12048, 12037, 12026, 12015, 12004, 11993, 11982, 11971, 11960, 11949, 11938, 11927, 11916, 11905, 11894, 11883, 11872, 11861, 11850, 11839, 11828, 11818, 11807, 11796, 11785, 11774, 11763, 11753, 11742, 11731, 11720, 11709, 11699, 11688, 11677, 11667, 11656, 11645, 11634, 11624, 11613, 11602, 11592, 11581, 11570, 11560, 11549, 11539, 11528, 11517, 11507, 11496, 11486, 11475, 11465, 11454, 11443, 11433, 11422, 11412, 11401, 11391, 11380, 11370, 11359, 11349, 11339, 11328, 11318, 11307, 11297, 11286, 11276, 11266, 11255, 11245, 11234, 11224, 11214, 11203, 11193, 11182, 11172, 11162, 11151, 11141, 11131, 11120, 11110, 11100, 11090, 11079, 11069, 11059, 11048, 11038, 11028, 11018, 11007, 10997, 10987, 10977, 10966, 10956, 10946, 10936, 10925, 10915, 10905, 10895, 10885, 10874, 10864, 10854, 10844, 10834, 10824, 10813, 10803, 10793, 10783, 10773, 10763, 10752, 10742, 10732, 10722, 10712, 10702, 10692, 10682, 10671, 10661, 10651, 10641, 10631, 10621, 10611, 10601, 10591, 10581, 10571, 10560, 10550, 10540, 10530, 10520, 10510, 10500, 10490, 10480, 10470, 10460, 10450, 10440, 10430, 10420, 10410, 10400, 10389, 10379, 10369, 10359, 10349, 10339, 10329, 10319, 10309, 10299, 10289, 10279, 10269, 10259, 10249, 10239, 10229, 10219, 10209, 10199, 10189, 10179, 10169, 10159, 10149, 10139, 10129, 10119, 10109, 10099, 10089, 10079, 10069, 10059, 10049, 10039, 10029, 10019, 10009, 9999, 9989, 9979, 9969, 9959, 9949, 9939, 9929, 9919, 9909, 9899, 9889, 9879, 9869, 9859, 9849, 9839, 9829, 9819, 9809, 9799, 9789, 9779, 9769, 9759, 9749, 9739, 9729, 9719, 9709, 9699, 9689, 9679, 9669, 9659, 9649, 9639, 9629, 9619, 9609, 9598, 9588, 9578, 9568, 9558, 9548, 9538, 9528, 9518, 9508, 9498, 9488, 9478, 9468, 9458, 9448, 9438, 9427, 9417, 9407, 9397, 9387, 9377, 9367, 9357, 9347, 9337, 9327, 9316, 9306, 9296, 9286, 9276, 9266, 9256, 9246, 9235, 9225, 9215, 9205, 9195, 9185, 9174, 9164, 9154, 9144, 9134, 9124, 9113, 9103, 9093, 9083, 9073, 9062, 9052, 9042, 9032, 9021, 9011, 9001, 8991, 8980, 8970, 8960, 8950, 8939, 8929, 8919, 8908, 8898, 8888, 8878, 8867, 8857, 8847, 8836, 8826, 8816, 8805, 8795, 8784, 8774, 8764, 8753, 8743, 8732, 8722, 8712, 8701, 8691, 8680, 8670, 8659, 8649, 8639, 8628, 8618, 8607, 8597, 8586, 8576, 8565, 8555, 8544, 8533, 8523, 8512, 8502, 8491, 8481, 8470, 8459, 8449, 8438, 8428, 8417, 8406, 8396, 8385, 8374, 8364, 8353, 8342, 8331, 8321, 8310, 8299, 8289, 8278, 8267, 8256, 8245, 8235, 8224, 8213, 8202, 8191, 8180, 8170, 8159, 8148, 8137, 8126, 8115, 8104, 8093, 8082, 8071, 8060, 8049, 8038, 8027, 8016, 8005, 7994, 7983, 7972, 7961, 7950, 7939, 7928, 7916, 7905, 7894, 7883, 7872, 7860, 7849, 7838, 7827, 7815, 7804, 7793, 7782, 7770, 7759, 7748, 7736, 7725, 7713, 7702, 7691, 7679, 7668, 7656, 7645, 7633, 7622, 7610, 7599, 7587, 7575, 7564, 7552, 7540, 7529, 7517, 7505, 7494, 7482, 7470, 7458, 7447, 7435, 7423, 7411, 7399, 7387, 7376, 7364, 7352, 7340, 7328, 7316, 7304, 7292, 7280, 7268, 7255, 7243, 7231, 7219, 7207, 7195, 7182, 7170, 7158, 7146, 7133, 7121, 7109, 7096, 7084, 7071, 7059, 7046, 7034, 7021, 7009, 6996, 6984, 6971, 6958, 6946, 6933, 6920, 6907, 6894, 6882, 6869, 6856, 6843, 6830, 6817, 6804, 6791, 6778, 6765, 6752, 6739, 6725, 6712, 6699, 6686, 6672, 6659, 6646, 6632, 6619, 6605, 6592, 6578, 6565, 6551, 6538, 6524, 6510, 6497, 6483, 6469, 6455, 6441, 6427, 6413, 6399, 6385, 6371, 6357, 6343, 6329, 6314, 6300, 6286, 6271, 6257, 6243, 6228, 6213, 6199, 6184, 6170, 6155, 6140, 6125, 6110, 6095, 6080, 6065, 6050, 6035, 6020, 6005, 5989, 5974, 5959, 5943, 5928, 5912, 5897, 5881, 5865, 5849, 5834, 5818, 5802, 5786, 5770, 5753, 5737, 5721, 5704, 5688, 5672, 5655, 5638, 5622, 5605, 5588, 5571, 5554, 5537, 5520, 5503, 5485, 5468, 5450, 5433, 5415, 5397, 5380, 5362, 5344, 5326, 5307, 5289, 5271, 5252, 5234, 5215, 5196, 5177, 5158, 5139, 5120, 5101, 5081, 5062, 5042, 5022, 5002, 4982, 4962, 4942, 4921, 4901, 4880, 4859, 4838, 4817, 4796, 4774, 4753, 4731, 4709, 4687, 4665, 4642, 4620, 4597, 4574, 4551, 4527, 4504, 4480, 4456, 4432, 4408, 4383, 4358, 4333, 4308, 4282, 4256, 4230, 4203, 4177, 4150, 4122, 4095, 4067, 4038, 4010, 3981, 3951, 3922, 3892, 3861, 3830, 3799, 3767, 3734, 3701, 3668, 3634, 3600, 3564, 3529, 3492, 3455, 3417, 3379, 3339, 3299, 3258, 3216, 3172, 3128, 3083, 3036, 2988, 2938, 2887, 2834, 2779, 2722, 2663, 2601, 2536, 2468, 2396, 2319, 2238, 2150, 2055, 1951, 1835, 1702, 1545, 1348, 1069, 53};
const PROGMEM  uint16_t power_array[] = {18929, 18929, 18650, 18453, 18296, 18163, 18047, 17943, 17848, 17760, 17679, 17602, 17530, 17462, 17397, 17335, 17276, 17219, 17164, 17111, 17060, 17010, 16962, 16915, 16870, 16826, 16782, 16740, 16699, 16659, 16619, 16581, 16543, 16506, 16469, 16434, 16398, 16364, 16330, 16297, 16264, 16231, 16199, 16168, 16137, 16106, 16076, 16047, 16017, 15988, 15960, 15931, 15903, 15876, 15848, 15821, 15795, 15768, 15742, 15716, 15690, 15665, 15640, 15615, 15590, 15566, 15542, 15518, 15494, 15471, 15447, 15424, 15401, 15378, 15356, 15333, 15311, 15289, 15267, 15245, 15224, 15202, 15181, 15160, 15139, 15118, 15097, 15077, 15056, 15036, 15016, 14996, 14976, 14956, 14936, 14917, 14897, 14878, 14859, 14840, 14821, 14802, 14783, 14764, 14746, 14727, 14709, 14691, 14672, 14654, 14636, 14618, 14601, 14583, 14565, 14548, 14530, 14513, 14495, 14478, 14461, 14444, 14427, 14410, 14393, 14376, 14360, 14343, 14326, 14310, 14294, 14277, 14261, 14245, 14228, 14212, 14196, 14180, 14164, 14149, 14133, 14117, 14101, 14086, 14070, 14055, 14039, 14024, 14009, 13993, 13978, 13963, 13948, 13933, 13918, 13903, 13888, 13873, 13858, 13843, 13828, 13814, 13799, 13785, 13770, 13755, 13741, 13727, 13712, 13698, 13684, 13669, 13655, 13641, 13627, 13613, 13599, 13585, 13571, 13557, 13543, 13529, 13515, 13501, 13488, 13474, 13460, 13447, 13433, 13420, 13406, 13393, 13379, 13366, 13352, 13339, 13326, 13312, 13299, 13286, 13273, 13259, 13246, 13233, 13220, 13207, 13194, 13181, 13168, 13155, 13142, 13129, 13116, 13104, 13091, 13078, 13065, 13052, 13040, 13027, 13015, 13002, 12989, 12977, 12964, 12952, 12939, 12927, 12914, 12902, 12889, 12877, 12865, 12852, 12840, 12828, 12816, 12803, 12791, 12779, 12767, 12755, 12743, 12730, 12718, 12706, 12694, 12682, 12670, 12658, 12646, 12634, 12622, 12611, 12599, 12587, 12575, 12563, 12551, 12540, 12528, 12516, 12504, 12493, 12481, 12469, 12458, 12446, 12434, 12423, 12411, 12399, 12388, 12376, 12365, 12353, 12342, 12330, 12319, 12307, 12296, 12285, 12273, 12262, 12250, 12239, 12228, 12216, 12205, 12194, 12183, 12171, 12160, 12149, 12138, 12126, 12115, 12104, 12093, 12082, 12070, 12059, 12048, 12037, 12026, 12015, 12004, 11993, 11982, 11971, 11960, 11949, 11938, 11927, 11916, 11905, 11894, 11883, 11872, 11861, 11850, 11839, 11828, 11818, 11807, 11796, 11785, 11774, 11763, 11753, 11742, 11731, 11720, 11709, 11699, 11688, 11677, 11667, 11656, 11645, 11634, 11624, 11613, 11602, 11592, 11581, 11570, 11560, 11549, 11539, 11528, 11517, 11507, 11496, 11486, 11475, 11465, 11454, 11443, 11433, 11422, 11412, 11401, 11391, 11380, 11370, 11359, 11349, 11339, 11328, 11318, 11307, 11297, 11286, 11276, 11266, 11255, 11245, 11234, 11224, 11214, 11203, 11193, 11182, 11172, 11162, 11151, 11141, 11131, 11120, 11110, 11100, 11090, 11079, 11069, 11059, 11048, 11038, 11028, 11018, 11007, 10997, 10987, 10977, 10966, 10956, 10946, 10936, 10925, 10915, 10905, 10895, 10885, 10874, 10864, 10854, 10844, 10834, 10824, 10813, 10803, 10793, 10783, 10773, 10763, 10752, 10742, 10732, 10722, 10712, 10702, 10692, 10682, 10671, 10661, 10651, 10641, 10631, 10621, 10611, 10601, 10591, 10581, 10571, 10560, 10550, 10540, 10530, 10520, 10510, 10500, 10490, 10480, 10470, 10460, 10450, 10440, 10430, 10420, 10410, 10400, 10389, 10379, 10369, 10359, 10349, 10339, 10329, 10319, 10309, 10299, 10289, 10279, 10269, 10259, 10249, 10239, 10229, 10219, 10209, 10199, 10189, 10179, 10169, 10159, 10149, 10139, 10129, 10119, 10109, 10099, 10089, 10079, 10069, 10059, 10049, 10039, 10029, 10019, 10009, 9999, 9989, 9979, 9969, 9959, 9949, 9939, 9929, 9919, 9909, 9899, 9889, 9879, 9869, 9859, 9849, 9839, 9829, 9819, 9809, 9799, 9789, 9779, 9769, 9759, 9749, 9739, 9729, 9719, 9709, 9699, 9689, 9679, 9669, 9659, 9649, 9639, 9629, 9619, 9609, 9598, 9588, 9578, 9568, 9558, 9548, 9538, 9528, 9518, 9508, 9498, 9488, 9478, 9468, 9458, 9448, 9438, 9427, 9417, 9407, 9397, 9387, 9377, 9367, 9357, 9347, 9337, 9327, 9316, 9306, 9296, 9286, 9276, 9266, 9256, 9246, 9235, 9225, 9215, 9205, 9195, 9185, 9174, 9164, 9154, 9144, 9134, 9124, 9113, 9103, 9093, 9083, 9073, 9062, 9052, 9042, 9032, 9021, 9011, 9001, 8991, 8980, 8970, 8960, 8950, 8939, 8929, 8919, 8908, 8898, 8888, 8878, 8867, 8857, 8847, 8836, 8826, 8816, 8805, 8795, 8784, 8774, 8764, 8753, 8743, 8732, 8722, 8712, 8701, 8691, 8680, 8670, 8659, 8649, 8639, 8628, 8618, 8607, 8597, 8586, 8576, 8565, 8555, 8544, 8533, 8523, 8512, 8502, 8491, 8481, 8470, 8459, 8449, 8438, 8428, 8417, 8406, 8396, 8385, 8374, 8364, 8353, 8342, 8331, 8321, 8310, 8299, 8289, 8278, 8267, 8256, 8245, 8235, 8224, 8213, 8202, 8191, 8180, 8170, 8159, 8148, 8137, 8126, 8115, 8104, 8093, 8082, 8071, 8060, 8049, 8038, 8027, 8016, 8005, 7994, 7983, 7972, 7961, 7950, 7939, 7928, 7916, 7905, 7894, 7883, 7872, 7860, 7849, 7838, 7827, 7815, 7804, 7793, 7782, 7770, 7759, 7748, 7736, 7725, 7713, 7702, 7691, 7679, 7668, 7656, 7645, 7633, 7622, 7610, 7599, 7587, 7575, 7564, 7552, 7540, 7529, 7517, 7505, 7494, 7482, 7470, 7458, 7447, 7435, 7423, 7411, 7399, 7387, 7376, 7364, 7352, 7340, 7328, 7316, 7304, 7292, 7280, 7268, 7255, 7243, 7231, 7219, 7207, 7195, 7182, 7170, 7158, 7146, 7133, 7121, 7109, 7096, 7084, 7071, 7059, 7046, 7034, 7021, 7009, 6996, 6984, 6971, 6958, 6946, 6933, 6920, 6907, 6894, 6882, 6869, 6856, 6843, 6830, 6817, 6804, 6791, 6778, 6765, 6752, 6739, 6725, 6712, 6699, 6686, 6672, 6659, 6646, 6632, 6619, 6605, 6592, 6578, 6565, 6551, 6538, 6524, 6510, 6497, 6483, 6469, 6455, 6441, 6427, 6413, 6399, 6385, 6371, 6357, 6343, 6329, 6314, 6300, 6286, 6271, 6257, 6243, 6228, 6213, 6199, 6184, 6170, 6155, 6140, 6125, 6110, 6095, 6080, 6065, 6050, 6035, 6020, 6005, 5989, 5974, 5959, 5943, 5928, 5912, 5897, 5881, 5865, 5849, 5834, 5818, 5802, 5786, 5770, 5753, 5737, 5721, 5704, 5688, 5672, 5655, 5638, 5622, 5605, 5588, 5571, 5554, 5537, 5520, 5503, 5485, 5468, 5450, 5433, 5415, 5397, 5380, 5362, 5344, 5326, 5307, 5289, 5271, 5252, 5234, 5215, 5196, 5177, 5158, 5139, 5120, 5101, 5081, 5062, 5042, 5022, 5002, 4982, 4962, 4942, 4921, 4901, 4880, 4859, 4838, 4817, 4796, 4774, 4753, 4731, 4709, 4687, 4665, 4642, 4620, 4597, 4574, 4551, 4527, 4504, 4480, 4456, 4432, 4408, 4383, 4358, 4333, 4308, 4282, 4256, 4230, 4203, 4177, 4150, 4122, 4095, 4067, 4038, 4010, 3981, 3951, 3922, 3892, 3861, 3830, 3799, 3767, 3734, 3701, 3668, 3634, 3600, 3564, 3529, 3492, 3455, 3417, 3379, 3339, 3299, 3258, 3216, 3172, 3128, 3083, 3036, 2988, 2938, 2887, 2834, 2779, 2722, 2663, 2601, 2536, 2468, 2396, 2319, 2238, 2150, 2055, 1951, 1835, 1702, 1545, 1348, 1069, 53};
#define TriacControl PD6     // Выход диммера на симистор
#define CoolerControl PD5 
#define RelayControl PD4      // Выход диммера на реле
#define ZeroCross PD2 // Pin для детектора нуля (2 пин!!!)
#define address_statusPID 0
#define address_setpoint 8
#define address_Kp 16
#define address_Ki 24
#define address_Kd 32
#define address_Hz 40
#define address_main_sensor 46
#define address_output_min 52
#define address_output_max 58

//BME280
#include <Wire.h>
#include "SparkFunBME280.h"
BME280 mySensor;


volatile uint16_t dim = 0x4E1F;       // Начальный уровень диммирования от 0 до 20000 начнем с отключенного
//volatile bool reg = 0;       //ключевое слово volatile означает, что значение переменной может 
volatile uint8_t tic = 0;   //меняться извне (например, из-за прерывания) 
//ВСТАВКА
//#include <LiquidCrystal.h>
//LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
// подключим необходимые библиотеки
#include <OneWire.h>
#include <DallasTemperature.h>
#include <EEPROM.h>
#include <FastPID.h>

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 

//float Kp=10, Ki=2, Kd=20, Hz=1;
float Kp, Ki, Kd, Hz;
uint8_t output_bits = 10;
String inputString = "";         // a String to hold incoming data
String comand = "";  
bool output_signed = false;
uint16_t output_min = 0;
uint16_t output_max = 1000;
uint32_t count = 0;
uint8_t  statusPID; // 0 - Stoped, 1 - Running, 2 - Pause
uint8_t  main_sensor = 0;
float setpoint;
uint16_t output;
uint8_t operation;

FastPID myPID(Kp, Ki, Kd, Hz, output_bits, output_signed);
bool output_signe = myPID.setOutputRange(output_min, output_max); 

// сигнальный провод датчиков подключен к 2 пину на Arduino
#define ONE_WIRE_BUS PD3

// выберем разрешение от 9 до 12
#define TEMPERATURE_PRECISION 12
//Define Variables we'll be connecting to
#define MAX_SENSORS 6
float feedback[MAX_SENSORS];
// настроем библиотеку 1-Wire для связи с датчиком
OneWire oneWire(ONE_WIRE_BUS);
 
// создадим объект для работы с библиотекой DallasTemperature
DallasTemperature sensors(&oneWire);
 
// создаем массив для хранения адреса датчика
DeviceAddress Thermometer[MAX_SENSORS];
 uint8_t found_sensors;
// функция вывода адреса датчика
/*
void printAddress(DeviceAddress deviceAddress){
  for (uint8_t i = 0; i < 8; i++){
    if (deviceAddress[i] < 16);// Serial.print("0");
  //  Serial.print(deviceAddress[i], HEX);
  }
}
*/
#define BTN_UP   1
#define BTN_DOWN 2
#define BTN_LEFT 3
#define BTN_RIGHT 4
#define BTN_SELECT 5
#define BTN_NONE 10

int detectButton() {
  int keyAnalog =  analogRead(A0);
  if (keyAnalog < 100) {
    // Значение меньше 100 – нажата кнопка right
    return BTN_RIGHT;
  } else if (keyAnalog < 200) {
    // Значение больше 100 (иначе мы бы вошли в предыдущий блок результата сравнения, но меньше 200 – нажата кнопка UP
    return BTN_UP;
  } else if (keyAnalog < 400) {
    // Значение больше 200, но меньше 400 – нажата кнопка DOWN
    return BTN_DOWN;
  } else if (keyAnalog < 600) {
    // Значение больше 400, но меньше 600 – нажата кнопка LEFT
    return BTN_LEFT;
  } else if (keyAnalog < 800) {
    // Значение больше 600, но меньше 800 – нажата кнопка SELECT
    return BTN_SELECT;
  } else {
    // Все остальные значения (до 1023) будут означать, что нажатий не было
    return BTN_NONE;
  }
}
void clearLine(int line){
  lcd.setCursor(0, line);
  lcd.print("                ");
}
/*
void saveSettings(){
EEPROM.put(address_statusPID, 0);
EEPROM.put(address_setpoint, 38.00f);
EEPROM.put(address_Kp, 1.1f); //1.1
EEPROM.put(address_Ki, 0.1f);
EEPROM.put(address_Kd, 0.24f);
EEPROM.put(address_Hz, 1.0f);
}*/
//void printDisplay(String message){
//  Serial.println(message);
//  lcd.setCursor(0, 1);
//  lcd.print(message);
  

//}
//ВСТАВКА
 
void setup() {

  
  //delay(1000);
 // EEPROM.get(address_Kp, Kp);
  pinMode(TriacControl , OUTPUT);               // установим выход диммера
  pinMode(RelayControl , OUTPUT);               // установим выход реле
  pinMode(ZeroCross, INPUT);                  //установим режим входа датчика нуля
  pinMode(CoolerControl, OUTPUT);
  
 //ВСТАВКА
  Serial.begin(115200);
//  delay(1000);
Serial.println("Start");

  //lcd.begin(16, 2);
  lcd.init();
  lcd.backlight();// Включаем подсветку дисплея
  lcd.print(" PID controller");

//delay(1000);
 EEPROM.get(address_statusPID, statusPID);
if (statusPID == 255){

EEPROM.put(address_statusPID, 1);
EEPROM.put(address_setpoint, 28.00f);
EEPROM.put(address_Kp, 10.0f); //1.1
EEPROM.put(address_Ki, 0.1f);
EEPROM.put(address_Kd, 0.24f);
EEPROM.put(address_Hz, 1.0f);
EEPROM.put(address_main_sensor, 0);
EEPROM.put(address_output_min, 0);
EEPROM.put(address_output_max, 1000);
}


EEPROM.get(address_statusPID, statusPID);
EEPROM.get(address_setpoint, setpoint);
EEPROM.get(address_Kp, Kp);
EEPROM.get(address_Ki, Ki);
EEPROM.get(address_Kd, Kd);
EEPROM.get(address_Hz, Hz);
EEPROM.get(address_main_sensor, main_sensor);
EEPROM.get(address_output_min, output_min);
EEPROM.get(address_output_max, output_max);

/*
EEPROM.put(address_statusPID, 0);
EEPROM.put(address_setpoint, 38.00f);
EEPROM.put(address_Kp, 1.1f); //1.1
EEPROM.put(address_Ki, 0.1f);
EEPROM.put(address_Kd, 0.24f);
EEPROM.put(address_Hz, 1.0f);
*/
//Serial.println (statusPID);
 /*
 lcd.setCursor(0, 1);
switch (statusPID) {
    case 0:
    lcd.print("    Running");
    for (uint8_t i=0; i <= 3; i++){
      clearLine(1);
      delay(500);
      lcd.print("    Running");
      delay(500);
   }
      break;
    case 255:
        for (uint8_t i=0; i <= 3; i++){
      clearLine(1);
      delay(500);
      lcd.print("     Stoped");
            delay(500);
   }
      break;
     default:
     delay(500);
      lcd.print("Press any key");
      delay(500);
      break;
  }
  */
  //float set_t = 0.00f;


    
    // инициализируем работу с датчиком
  sensors.begin();
 Serial.print("Locating devices...");
  Serial.print("Found ");
  found_sensors = sensors.getDeviceCount();
  Serial.print(found_sensors, DEC);
  Serial.println(" devices.");
  // выведем общее количество найденных датчиков
 // Serial.print("Found ");
 // Serial.print(sensors.getDeviceCount(), DEC);
 // Serial.println(" devices.");
 
  // проверяем способ подключения питания
//  Serial.print("Parasite power is: ");
 // if (sensors.isParasitePowerMode()){
 // Serial.println("ON");
 // } else {
//  Serial.println("OFF");
 // }
  // сделаем запрос на получение адреса датчика
  //sensors.getAddress(Thermometer, 0);
  for (uint8_t i = 0; i < found_sensors; i++)
  {
  if (!sensors.getAddress(Thermometer[i], i)) 
    {
    Serial.print("Unable to find address for Device ");
    Serial.println(i);
    }
  }
  // выведем полученный адрес
//  Serial.print("Device 0 Address: ");
//  printAddress(Thermometer);
//  Serial.println();

   for (uint8_t i = 0; i < found_sensors; i++)
  {
  Serial.print("Device ");
  Serial.print(i);
  Serial.print(" Address: ");
  printAddress(Thermometer[i]);
//  Serial.print();
    Serial.print(" Resolution: ");
  uint8_t sensor_precision = sensors.getResolution(Thermometer[i]);
  Serial.print(sensor_precision, DEC);
  if (sensor_precision != TEMPERATURE_PRECISION)
  {
    sensors.setResolution(Thermometer[i], TEMPERATURE_PRECISION);
    Serial.print(" Set sensor precision ");
    Serial.print(TEMPERATURE_PRECISION, DEC);
  }
  Serial.println();
  }
  // установим выбранное разрешение датчика
 // sensors.setResolution(Thermometer, TEMPERATURE_PRECISION);
  // выведем значение установленного разрешения
//  Serial.print("Resolution: ");
//  Serial.print(sensors.getResolution(Thermometer), DEC);
//  Serial.println();
// clearLine(0);
 //ВСТАВКА
  //initialize the variables we're linked to
//  Input = analogRead(0);
//  setpoint = 40;
  
//myPID.SetOutputLimits(0, 1000);
//myPID.SetSampleTime (1000);
//myPID.SetControllerDirection (REVERSE);
  //turn the PID on
//  myPID.SetMode(AUTOMATIC);

attachInterrupt(0, zero, FALLING); // прерывание для детектора нуля (2 пин!!!)
  //digitalWrite(relePin , HIGH); //включаем реле
  /**** настройка прерывания по таймеру каждую 0,001 сек (вызов функции ISR (TIMER0_COMPA_vect)) ****/


 TCCR1A = 0x00;
  TCCR1B = 0x02;                         ////установить делитель частоты на 8
  OCR1A = dim;                        //начало отсчета до переполнения (249)
  OCR1B = 19100;
  TIMSK1 = 0x06;      

  
 /*  
  
  TCCR1A = 0x30;              //1 на выход при совпадении при совпадении
  TCCR1B = 0x02;               ////установить делитель частоты на 64 
  OCR1B = dim;                        //начало отсчета до переполнения (249)
  TIMSK0 = 0x00;             //Запретить прерывания
 TCNT1 =0x0000;
*/

 
  //sei();                               //разрешить прерывания
    // отправляем запрос на измерение температуры
  sensors.requestTemperatures();
    Serial.println("Reading basic values from BME280");
 mySensor.setI2CAddress(0x76); //Connect to a second sensor

  if(mySensor.beginI2C() == false) Serial.println("Sensor B connect failed");
  Wire.begin();
 
  if (mySensor.beginI2C() == false) //Begin communication over I2C
  {
    Serial.println("The sensor did not respond. Please check wiring.");
   // while(1); //Freeze
  }

  
    delay(1000);
}

// function to print a device address
void printAddress(DeviceAddress deviceAddress)
{
  for (uint8_t i = 0; i < 8; i++)
  {
    // zero pad the address if necessary
    if (deviceAddress[i] < 16) Serial.print("0");
    Serial.print(deviceAddress[i], HEX);
  }
}

// function to print the temperature for a device
void printTemperature(DeviceAddress deviceAddress)
{
  float tempC = sensors.getTempC(deviceAddress);
  Serial.print("C:");
  Serial.print(tempC);
 }

// function to print a device's resolution
void printResolution(DeviceAddress deviceAddress)
{
  Serial.print("Resolution: ");
  Serial.print(sensors.getResolution(deviceAddress));
  Serial.println();
}

// main function to print information about a device
void printData(DeviceAddress deviceAddress)
{
  //Serial.print(": ");
  printAddress(deviceAddress);
  Serial.print(" ");
  printTemperature(deviceAddress);
  Serial.println();
}


void(* resetFunc) (void) = 0;

ISR (TIMER1_COMPA_vect) //функция, вызываемая таймером-счетчиком каждые 0,001 сек.
{
  PORTD |= (1 << 6);
 
 }
ISR (TIMER1_COMPB_vect) //функция, вызываемая таймером-счетчиком каждые 0,001 сек.
{
PORTD &= ~ (1 << 6);
}

void zero() {
  TCNT1 =0x0000;
 //intdim = 0;
  OCR1A = dim;

  if (tic < 99) {
    tic = tic + 1;
    }else{
      tic = 0;
    }
}


/*
void zero() {

  TCNT1 =0x0000;
  TCCR1A = 0x20;
  TCCR1C = 0x40;
  TCCR1A = 0x30;
  OCR1B = dim;
 
  if (tic < 99) {tic = tic + 1;}
  else
  {tic = 0;}
}
*/
void loop() {
  
while(tic != 99){ 
 }
//tic=100;
/*  int button = detectButton();
 
  switch (button) {
    case BTN_UP:
      printDisplay("UP");
      break;
    case BTN_DOWN:
      printDisplay("DOWN");
      break;
    case BTN_LEFT:
      printDisplay("LEFT");
      break;
    case BTN_RIGHT:
      printDisplay("RIGHT");
      break;
    case BTN_SELECT:
      printDisplay("SELECT");
      break;
    default:
//      printDisplay("Press any key");
      break;
  }
  */

  // создаем переменную для хранения температуры в градусах Цельсия и выводим её значение
//  Input = sensors.getTempC(Thermometer);
  // Input = cur_t;
  /*
    for (uint8_t i = 0; i < found_sensors; i++)
  {
  printData(Thermometer[i]);
  }
  */
  float feedback [found_sensors];
      for (uint8_t i = 0; i < found_sensors; i++)
  {
   feedback[i] = sensors.getTempC(Thermometer[i]); 
 // printData(Thermometer[i]);
  }
  sensors.requestTemperatures(); // Запрос температур
//  int ts = micros();
uint16_t feed = feedback[main_sensor] *8;
uint16_t set = setpoint*8;

   if (statusPID == 0) 
   {
//    Serial.println("PID Stoped");
myPID.clear();
dim = pgm_read_word_near(power_array);
//OCR1B = dim;
output = 0;

PORTD &= ~ (1 << 5); //выключаем куллер
    digitalWrite(RelayControl , LOW); //выключаем реле
       }
   if (statusPID == 1) 
   {
  digitalWrite(RelayControl , HIGH); // Первым делом включаем реле чтобы небыло искры
    PORTD |= (1 << 5); // Включаем куллер

//    Serial.println("PID Running");
bool output_signe = myPID.setCoefficients(Kp, Ki, Kd, Hz);
output_signe = myPID.setOutputRange(output_min, output_max);
output = myPID.step(set, feed);
dim = pgm_read_word_near(power_array + output);
//OCR1B = dim;

       }
          if (statusPID == 2) 
   {
//    Serial.println("PID Paused");
//myPID.clear();
//dim = pgm_read_word_near(power_array);
//OCR1B = dim;
//output = 0;

   // digitalWrite(relePin , LOW); //включаем реле
       }

    lcd.setCursor(0, 0);
    lcd.print("S=");
    lcd.print(setpoint, 2);
    lcd.print("  ");
    lcd.setCursor(8, 0);
    lcd.print("C=");
    lcd.print(feedback[main_sensor], 2); 
   // clearLine(1); 
     lcd.setCursor(0, 1);
     lcd.print(count);
     lcd.print("  ");
     lcd.setCursor(8, 1);
     lcd.print("P=");
  float power = (output*0.1);
     lcd.print(power, 1);
     lcd.print("%  ");
     
     Serial.print("Log;SPID=");
     Serial.print(statusPID, DEC);
     Serial.print(";MS=");
     Serial.print(main_sensor, DEC);
     Serial.print(";T=");
     Serial.print(count, DEC);
     Serial.print(";SP=");

     Serial.print(setpoint, 2);
     Serial.print(";fb=");
  
     Serial.print(feedback[main_sensor], 2);
     Serial.print(";out=");
     
     Serial.print(output);
 //    Serial.print(";");
     for (uint8_t i = 0; i < found_sensors; i++)
  {
   
     Serial.print(";");
     Serial.print(feedback[i], 2);
  
 // printData(Thermometer[i]);
  }
  //Serial.println(";");

  Serial.print(";Hum=");
  Serial.print(mySensor.readFloatHumidity(), 0);

  Serial.print(";Pressure=");
  Serial.print(mySensor.readFloatPressure(), 0);

  Serial.print(";Alt=");
  Serial.print(mySensor.readFloatAltitudeMeters(), 1);
  
  Serial.print(";Temp=");
  Serial.print(mySensor.readTempC(), 2);
Serial.println(";");

  //Serial.println();
     count=count+1;

     
}

void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    if (inChar == ' ')
    {
      comand = inputString;
//      inChar = '';
      inputString = "";
    }
    
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    
    if (inChar == '\n') {
if (comand == "SPID") 
    {
      statusPID = inputString.toInt();
      //setpoint = setpoint / 1000;
      Serial.print("Ok. SPID=");
      Serial.println(statusPID);
      switch (statusPID) {
    case 0:
      Serial.println("PID Stoped");
      break;
    case 1:
      Serial.println("PID Running");
      break;
       case 2:
      Serial.println("PID Paused");
      break;
    default:
      // if nothing else matches, do the default
      // default is optional
    break;
  }
      EEPROM.put(address_statusPID, statusPID);
    }
if (comand == "SP") 
    {
      setpoint = inputString.toInt();
      setpoint = setpoint / 1000;
      Serial.print("Ok. SP=");
      Serial.println(setpoint, 4);
      EEPROM.put(address_setpoint, setpoint);
    }
if (comand == "Kp") 
    {
      Kp = inputString.toInt();
      Kp = Kp / 1000;
      Serial.print("Ok. Kp=");
      Serial.println(Kp, 4);
      EEPROM.put(address_Kp, Kp);
    }
if (comand == "Ki") 
    {
      Ki = inputString.toInt();
      Ki = Ki / 1000;
      Serial.print("Ok. Ki=");
      Serial.println(Ki, 4);
      EEPROM.put(address_Ki, Ki);
    }
if (comand == "Kd") 
    {
      Kd = inputString.toInt();
      Kd = Kd / 1000;
      Serial.print("Ok. Kd=");
      Serial.println(Kd, 4);
      EEPROM.put(address_Kd, Kd);
    }
if (comand == "Hz") 
    {
      Hz = inputString.toInt();
      Hz = Hz / 1000;
      Serial.print("Ok. Hz=");
      Serial.println(Hz, 4);
      EEPROM.put(address_Hz, Hz);
    }
if (comand == "Omin") 
    {
      output_min = inputString.toInt();
      Serial.print("Ok. Omin=");
      Serial.println(output_min, DEC);
      EEPROM.put(address_output_min, output_min);
    }
if (comand == "Omax") 
    {
      output_max = inputString.toInt();
      Serial.print("Ok. Omax=");
      Serial.println(output_max, DEC);
      EEPROM.put(address_output_max, output_max);
    }
if (comand == "MS") 
    {
      main_sensor = inputString.toInt();
      Serial.print("Ok. MS=");
      Serial.println(main_sensor);
      EEPROM.put(address_main_sensor, main_sensor);
    }
if (comand == "RESET") 
    {
      Serial.println("Reseting");
      delay(1000);
      resetFunc();
    }    
if (comand == "CS") 
    {
      Serial.println("Ok. CS");
      Serial.print("SPID=");
      Serial.println(statusPID);
      Serial.print("SP=");
      Serial.println(setpoint, 2);
      Serial.print("Kp=");
      Serial.println(Kp, 4);
      Serial.print("Ki=");
      Serial.println(Ki, 4);
      Serial.print("Kd=");
      Serial.println(Kd, 4);
      Serial.print("Hz=");
      Serial.println(Hz, 4);
      Serial.print("Omin=");
      Serial.println(output_min, DEC);
      Serial.print("Omax=");
      Serial.println(output_max, DEC);
    }
       comand = "";
      inputString = "";
//      stringComplete = true;
    }
  }
}
