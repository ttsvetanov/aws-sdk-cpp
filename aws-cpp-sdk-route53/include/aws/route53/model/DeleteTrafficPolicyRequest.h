﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A request to delete a specified traffic policy version.</p>
   */
  class AWS_ROUTE53_API DeleteTrafficPolicyRequest : public Route53Request
  {
  public:
    DeleteTrafficPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline DeleteTrafficPolicyRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline DeleteTrafficPolicyRequest& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the traffic policy that you want to delete.</p>
     */
    inline DeleteTrafficPolicyRequest& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The version number of the traffic policy that you want to delete.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the traffic policy that you want to delete.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the traffic policy that you want to delete.</p>
     */
    inline DeleteTrafficPolicyRequest& WithVersion(int value) { SetVersion(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
