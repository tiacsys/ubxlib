/*
 * Copyright 2019-2024 u-blox
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _U_CFG_TEST_PLATFORM_SPECIFIC_FRDM_MCXN947_H_
#define _U_CFG_TEST_PLATFORM_SPECIFIC_FRDM_MCXN947_H_

/** Pin A for GPIO testing: will be used as an output and
 * must be connected to pin B via a 1k resistor.
 */
#ifndef U_CFG_TEST_PIN_A
# define U_CFG_TEST_PIN_A         -1
#endif

/** Pin B for GPIO testing: will be used as both an input and
 * and open drain output and must be connected both to pin A via
 * a 1k resistor and directly to pin C.
 */
#ifndef U_CFG_TEST_PIN_B
# define U_CFG_TEST_PIN_B         -1
#endif

/** Pin C for GPIO testing: must be connected to pin B,
 * will be used as an input only.
 */
#ifndef U_CFG_TEST_PIN_C
# define U_CFG_TEST_PIN_C         -1
#endif

/** Reset pin for a GNSS module, required when such a module is
 * connected via I2C and needs resetting before it is used for
 * testing the I2C port layer; should be connected to the RESET_N
 * pin of the GNSS module.
 */
#ifndef U_CFG_TEST_PIN_GNSS_RESET_N
# define U_CFG_TEST_PIN_GNSS_RESET_N   -1
#endif

#endif // _U_CFG_TEST_PLATFORM_SPECIFIC_FRDM_MCXN947_H_

// End of file
