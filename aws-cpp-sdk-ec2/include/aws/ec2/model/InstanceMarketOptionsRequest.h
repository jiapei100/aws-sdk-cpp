﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/MarketType.h>
#include <aws/ec2/model/SpotMarketOptions.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the market (purchasing) option for the instances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceMarketOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceMarketOptionsRequest
  {
  public:
    InstanceMarketOptionsRequest();
    InstanceMarketOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceMarketOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The market type.</p>
     */
    inline const MarketType& GetMarketType() const{ return m_marketType; }

    /**
     * <p>The market type.</p>
     */
    inline void SetMarketType(const MarketType& value) { m_marketTypeHasBeenSet = true; m_marketType = value; }

    /**
     * <p>The market type.</p>
     */
    inline void SetMarketType(MarketType&& value) { m_marketTypeHasBeenSet = true; m_marketType = std::move(value); }

    /**
     * <p>The market type.</p>
     */
    inline InstanceMarketOptionsRequest& WithMarketType(const MarketType& value) { SetMarketType(value); return *this;}

    /**
     * <p>The market type.</p>
     */
    inline InstanceMarketOptionsRequest& WithMarketType(MarketType&& value) { SetMarketType(std::move(value)); return *this;}


    /**
     * <p>The options for Spot Instances.</p>
     */
    inline const SpotMarketOptions& GetSpotOptions() const{ return m_spotOptions; }

    /**
     * <p>The options for Spot Instances.</p>
     */
    inline void SetSpotOptions(const SpotMarketOptions& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = value; }

    /**
     * <p>The options for Spot Instances.</p>
     */
    inline void SetSpotOptions(SpotMarketOptions&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::move(value); }

    /**
     * <p>The options for Spot Instances.</p>
     */
    inline InstanceMarketOptionsRequest& WithSpotOptions(const SpotMarketOptions& value) { SetSpotOptions(value); return *this;}

    /**
     * <p>The options for Spot Instances.</p>
     */
    inline InstanceMarketOptionsRequest& WithSpotOptions(SpotMarketOptions&& value) { SetSpotOptions(std::move(value)); return *this;}

  private:

    MarketType m_marketType;
    bool m_marketTypeHasBeenSet;

    SpotMarketOptions m_spotOptions;
    bool m_spotOptionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
